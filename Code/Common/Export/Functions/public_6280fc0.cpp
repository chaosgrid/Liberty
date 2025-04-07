#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6280ff8 _public_6280ff8
#define public_628100d _public_628100d
#define public_6281030 _public_6281030
#define public_6281045 _public_6281045

PROC_DECLARE(0x6280fc0, internal_6280fc0, public_6280fc0);
extern "C" NAKED register_t __cdecl internal_6280fc0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov al, byte ptr ss : [ebp]
        push esi
        push edi
        mov ebx, ecx
        push 0x14
        mov byte ptr ds : [ebx], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6281045
        public_6280ff8 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_628100d
        mov ebp, eax
        public_628100d : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6281030
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+8], edx
        public_6281030 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6280ff8
        mov ebp, dword ptr ss : [esp+0x18]
        public_6281045 : nop
        mov al, byte ptr ss : [ebp+0xC]
        mov byte ptr ds : [ebx+0xC], al
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x10], ecx
        mov edx, dword ptr ss : [ebp+0x14]
        pop edi
        mov dword ptr ds : [ebx+0x14], edx
        mov eax, dword ptr ss : [ebp+0x18]
        pop esi
        mov dword ptr ds : [ebx+0x18], eax
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6280fc0)
    }
}

#undef public_6280ff8
#undef public_628100d
#undef public_6281030
#undef public_6281045
