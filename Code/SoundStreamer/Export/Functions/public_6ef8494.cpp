#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8494);
CLANG_FORWARD_PROC_SYMBOL(public_6ef852d);

#define public_6ef84b1 _public_6ef84b1
#define public_6ef84e0 _public_6ef84e0
#define public_6ef84e8 _public_6ef84e8
#define public_6ef84f3 _public_6ef84f3
#define public_6ef84f4 _public_6ef84f4
#define public_6ef8505 _public_6ef8505
#define public_6ef852b _public_6ef852b

PROC_DECLARE(0x6ef8494, internal_6ef8494, public_6ef8494);
extern "C" NAKED register_t __cdecl internal_6ef8494()
{
    __asm
    {
        push edi
        push 1
        pop edi
        cmp dword ptr ds : [public_6f01138], edi
        jne public_6ef84b1
        push dword ptr ss : [esp+8]
        call dword ptr ds : [public_6efc094]
        push eax
        call dword ptr ds : [public_6efc0c4]
        public_6ef84b1 : nop
        cmp dword ptr ss : [esp+0xC], 0
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_6f01134], edi
        mov byte ptr ds : [public_6f01130], bl
        jne public_6ef8505
        mov eax, dword ptr ds : [public_6f02650]
        test eax, eax
        je public_6ef84f4
        mov ecx, dword ptr ds : [public_6f0264c]
        push esi
        lea esi, ds:[ecx-4]
        cmp esi, eax
        jb public_6ef84f3
        public_6ef84e0 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ef84e8
        call eax
        public_6ef84e8 : nop
        sub esi, 4
        cmp esi, dword ptr ds : [public_6f02650]
        jae public_6ef84e0
        public_6ef84f3 : nop
        pop esi
/*FIXUP public_6ef84f4 : nop
        push offset public_6efe034 @0x6ef84f4*/
  FIXUP public_6ef84f4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe034
/*FIXUP push offset public_6efe02c @0x6ef84f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe02c
        call public_6ef852d
        pop ecx
        pop ecx
/*FIXUP public_6ef8505 : nop
        push offset public_6efe040 @0x6ef8505*/
  FIXUP public_6ef8505 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe040
/*FIXUP push offset public_6efe038 @0x6ef850a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe038
        call public_6ef852d
        pop ecx
        pop ecx
        test ebx, ebx
        pop ebx
        jne public_6ef852b
        push dword ptr ss : [esp+8]
        mov dword ptr ds : [public_6f01138], edi
        call dword ptr ds : [public_6efc0c0]
        public_6ef852b : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ef8494)
    }
}

#undef public_6ef84b1
#undef public_6ef84e0
#undef public_6ef84e8
#undef public_6ef84f3
#undef public_6ef84f4
#undef public_6ef8505
#undef public_6ef852b
