#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62716c0 _public_62716c0
#define public_62716d5 _public_62716d5
#define public_62716f2 _public_62716f2
#define public_6271706 _public_6271706

PROC_DECLARE(0x6271680, internal_6271680, public_6271680);
extern "C" NAKED register_t __cdecl internal_6271680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, ecx
        mov cl, byte ptr ds : [eax]
        push esi
        push 0x10
        mov byte ptr ds : [ebx], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 4
        test eax, eax
        jbe public_6271706
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov dword ptr ss : [esp+0x1C], eax
        lea esp, ss:[esp]
        public_62716c0 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_62716d5
        mov edi, eax
        public_62716d5 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_62716f2
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+4], edx
        public_62716f2 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        dec eax
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_62716c0
        pop edi
        pop ebp
        public_6271706 : nop
        pop esi
        mov eax, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6271680)
    }
}

#undef public_62716c0
#undef public_62716d5
#undef public_62716f2
#undef public_6271706
