#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f920);

#define public_627f932 _public_627f932
#define public_627f947 _public_627f947
#define public_627f954 _public_627f954
#define public_627f960 _public_627f960
#define public_627f96a _public_627f96a
#define public_627f96f _public_627f96f
#define public_627f971 _public_627f971
#define public_627f976 _public_627f976

PROC_DECLARE(0x627f920, internal_627f920, public_627f920);
extern "C" NAKED register_t __cdecl internal_627f920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp eax, esi
        je public_627f976
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        public_627f932 : nop
        inc dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_627f954
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_627f96f
        public_627f947 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_627f947
        jmp public_627f96f
        public_627f954 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_627f96a
        lea esp, ss:[esp]
        public_627f960 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_627f960
        public_627f96a : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_627f971
        public_627f96f : nop
        mov eax, ecx
        public_627f971 : nop
        cmp eax, esi
        jne public_627f932
        pop ebx
        public_627f976 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x627f920)
    }
}

#undef public_627f932
#undef public_627f947
#undef public_627f954
#undef public_627f960
#undef public_627f96a
#undef public_627f96f
#undef public_627f971
#undef public_627f976
