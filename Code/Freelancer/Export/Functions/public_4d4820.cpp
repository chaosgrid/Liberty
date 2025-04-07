#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4820);

#define public_4d4845 _public_4d4845
#define public_4d4899 _public_4d4899
#define public_4d489b _public_4d489b
#define public_4d489f _public_4d489f
#define public_4d48d4 _public_4d48d4
#define public_4d48e9 _public_4d48e9

PROC_DECLARE(0x4d4820, internal_4d4820, public_4d4820);
extern "C" NAKED register_t __cdecl internal_4d4820()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, ecx
        mov dword ptr ss : [esp+8], ecx
        je public_4d48e9
        push ebx
        mov ebx, dword ptr ss : [ebp+4]
        push esi
        mov esi, dword ptr ds : [ebx]
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp edx, edi
        je public_4d489f
        public_4d4845 : nop
        cmp esi, ebx
        je public_4d48d4
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [edx+0x14]
        fnstsw ax
        test ah, 5
        jp public_4d4899
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [edx+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edx+4]
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+4], esi
        mov ebp, dword ptr ss : [esp+0x1C]
        mov esi, eax
        jmp public_4d489b
        public_4d4899 : nop
        mov edx, dword ptr ds : [edx]
        public_4d489b : nop
        cmp edx, edi
        jne public_4d4845
        public_4d489f : nop
        cmp esi, ebx
        je public_4d48d4
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [edx], edi
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+4], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [edx+4], eax
        public_4d48d4 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [ebp+8], 0
        pop ebx
        public_4d48e9 : nop
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x4d4820)
    }
}

#undef public_4d4845
#undef public_4d4899
#undef public_4d489b
#undef public_4d489f
#undef public_4d48d4
#undef public_4d48e9
