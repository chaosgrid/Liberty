#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8120);

#define public_65d812c _public_65d812c
#define public_65d8140 _public_65d8140
#define public_65d8173 _public_65d8173
#define public_65d817d _public_65d817d
#define public_65d8187 _public_65d8187
#define public_65d8191 _public_65d8191

PROC_DECLARE(0x65d8120, internal_65d8120, public_65d8120);
extern "C" NAKED register_t __cdecl internal_65d8120()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, 3
        je public_65d8140
        public_65d812c : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        test al, al
        je public_65d8173
        test ecx, 3
        jne public_65d812c
        add eax, 0
        public_65d8140 : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, 0x7EFEFEFF
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        add ecx, 4
        test eax, 0x81010100
        je public_65d8140
        mov eax, dword ptr ds : [ecx-4]
        test al, al
        je public_65d8191
        test ah, ah
        je public_65d8187
        test eax, 0xFF0000
        je public_65d817d
        test eax, 0xFF000000
        je public_65d8173
        jmp public_65d8140
        public_65d8173 : nop
        lea eax, ds:[ecx-1]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        public_65d817d : nop
        lea eax, ds:[ecx-2]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        public_65d8187 : nop
        lea eax, ds:[ecx-3]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        public_65d8191 : nop
        lea eax, ds:[ecx-4]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        UNREACHABLE_TRAP(0x65d8120)
    }
}

#undef public_65d812c
#undef public_65d8140
#undef public_65d8173
#undef public_65d817d
#undef public_65d8187
#undef public_65d8191
