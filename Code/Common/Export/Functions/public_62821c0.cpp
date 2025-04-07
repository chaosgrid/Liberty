#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62821d4 _public_62821d4
#define public_62821e9 _public_62821e9
#define public_628220f _public_628220f
#define public_628221c _public_628221c

PROC_DECLARE(0x62821c0, internal_62821c0, public_62821c0);
extern "C" NAKED register_t __cdecl internal_62821c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebx
        mov ebx, ecx
        jbe public_628221c
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, eax
        public_62821d4 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_62821e9
        mov esi, eax
        public_62821e9 : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_628220f
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        public_628220f : nop
        mov ecx, dword ptr ds : [ebx+8]
        inc ecx
        dec ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_62821d4
        pop edi
        pop esi
        pop ebp
        public_628221c : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62821c0)
    }
}

#undef public_62821d4
#undef public_62821e9
#undef public_628220f
#undef public_628221c
