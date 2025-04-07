#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa91fc);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9356);

#define public_6fa9212 _public_6fa9212
#define public_6fa923a _public_6fa923a
#define public_6fa923e _public_6fa923e
#define public_6fa9264 _public_6fa9264
#define public_6fa927b _public_6fa927b
#define public_6fa928c _public_6fa928c
#define public_6fa9291 _public_6fa9291
#define public_6fa92a1 _public_6fa92a1
#define public_6fa92a4 _public_6fa92a4

PROC_DECLARE(0x6fa91fc, internal_6fa91fc, public_6fa91fc);
extern "C" NAKED register_t __cdecl internal_6fa91fc()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6fa9212
        cmp dword ptr ds : [public_6fd3de8], eax
        jle public_6fa923a
        dec dword ptr ds : [public_6fd3de8]
        public_6fa9212 : nop
        mov ecx, dword ptr ds : [public_6fb331c]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6fd3df0], ecx
        jne public_6fa9264
        push 0x80
        call dword ptr ds : [public_6fb3320]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6fd3dfc], eax
        jne public_6fa923e
        public_6fa923a : nop
        xor eax, eax
        jmp public_6fa92a4
        public_6fa923e : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6fd3dfc]
/*FIXUP push offset public_6fce2cc @0x6fa9246*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fce2cc
/*FIXUP push offset public_6fcd000 @0x6fa924b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fcd000
        mov dword ptr ds : [public_6fd3df8], eax
        call public_6fa9356
        inc dword ptr ds : [public_6fd3de8]
        pop ecx
        pop ecx
        jmp public_6fa92a1
        public_6fa9264 : nop
        test eax, eax
        jne public_6fa92a1
        mov eax, dword ptr ds : [public_6fd3dfc]
        test eax, eax
        je public_6fa92a1
        mov ecx, dword ptr ds : [public_6fd3df8]
        push esi
        lea esi, ds:[ecx-4]
        public_6fa927b : nop
        cmp esi, eax
        jb public_6fa9291
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6fa928c
        call ecx
        mov eax, dword ptr ds : [public_6fd3dfc]
        public_6fa928c : nop
        sub esi, 4
        jmp public_6fa927b
        public_6fa9291 : nop
        push eax
        call dword ptr ds : [public_6fb3390]
        and dword ptr ds : [public_6fd3dfc], 0
        pop ecx
        pop esi
        public_6fa92a1 : nop
        push 1
        pop eax
        public_6fa92a4 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6fa91fc)
    }
}

#undef public_6fa9212
#undef public_6fa923a
#undef public_6fa923e
#undef public_6fa9264
#undef public_6fa927b
#undef public_6fa928c
#undef public_6fa9291
#undef public_6fa92a1
#undef public_6fa92a4
