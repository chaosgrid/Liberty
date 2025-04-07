#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d92760);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d92776 _public_6d92776
#define public_6d927b2 _public_6d927b2
#define public_6d927c6 _public_6d927c6
#define public_6d927cd _public_6d927cd
#define public_6d927db _public_6d927db

PROC_DECLARE(0x6d92760, internal_6d92760, public_6d92760);
extern "C" NAKED register_t __cdecl internal_6d92760()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6d927db
        push ebp
        push esi
        push edi
        public_6d92776 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6d927cd
        push 8
        call public_6db1f8a
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov edi, eax
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], ecx
        mov esi, dword ptr ds : [edx+0x4C]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6db1f8a
        add esp, 8
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6d927b2
        mov ebp, eax
        public_6d927b2 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d927c6
        mov dword ptr ds : [eax], edi
        public_6d927c6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+0x50]
        public_6d927cd : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+4]
        jne public_6d92776
        pop edi
        pop esi
        pop ebp
        public_6d927db : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d92760)
    }
}

#undef public_6d92776
#undef public_6d927b2
#undef public_6d927c6
#undef public_6d927cd
#undef public_6d927db
