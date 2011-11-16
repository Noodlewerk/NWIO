//
//  NWIOIdentity.h
//  NWIO
//
//  Copyright 2011 Noodlewerk
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "NWIOFilter.h"

/**
 * A filter that does absolutely nothing. Mostly used for subclassing.
 *
 * If no stream is assigned to this filter, it will function alike a zero constant stream.
 */
@interface NWIOIdentityStream : NWIOFilterStream
@end

@interface NWIOIdentityAccess : NWIOFilterAccess
@end