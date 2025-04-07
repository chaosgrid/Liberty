#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f35b50);

#define public_6f35b70 _public_6f35b70
#define public_6f35b8b _public_6f35b8b
#define public_6f35be3 _public_6f35be3
#define public_6f35be7 _public_6f35be7

PROC_DECLARE(0x6f35b50, internal_6f35b50, public_6f35b50);
extern "C" NAKED register_t __cdecl internal_6f35b50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x40
        cmp eax, 0x64
        jbe public_6f35be7
        push esi
        xor ecx, ecx
        test eax, eax
        push edi
        mov esi, eax
        mov edi, 1
        jbe public_6f35b8b
        nop 
        public_6f35b70 : nop
        mov eax, esi
        xor edx, edx
        mov esi, 0xA
        div esi
        lea edi, ds:[edi+edi*4]
        inc ecx
        shl edi, 1
        mov dword ptr ss : [esp+ecx*4+4], edx
        mov esi, eax
        test esi, esi
        ja public_6f35b70
        public_6f35b8b : nop
        push ebx
        cmp dword ptr ss : [esp+ecx*4+8], 5
        setb bl
        mov eax, 0xCCCCCCCD
        mul edi
        mov eax, dword ptr ss : [esp+ecx*4+8]
        shr edx, 3
        imul eax, edx
        dec ecx
        add esi, eax
        mov eax, 0xCCCCCCCD
        mul edx
        mov eax, dword ptr ss : [esp+ecx*4+8]
        shr edx, 3
        dec ecx
        imul eax, edx
        add esi, eax
        mov eax, 0xCCCCCCCD
        mul edx
        shr edx, 3
        test bl, bl
        pop ebx
        je public_6f35be3
        lea eax, ss:[esp+ecx*4+4]
        cmp dword ptr ds : [eax], 5
        sbb ecx, ecx
        and ecx, 0xFFFFFFFB
        add ecx, 5
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        imul eax, edx
        add esi, eax
        public_6f35be3 : nop
        pop edi
        mov eax, esi
        pop esi
        public_6f35be7 : nop
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6f35b50)
    }
}

#undef public_6f35b70
#undef public_6f35b8b
#undef public_6f35be3
#undef public_6f35be7
