#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410760);
CLANG_FORWARD_PROC_SYMBOL(public_410940);
CLANG_FORWARD_PROC_SYMBOL(public_410d10);
CLANG_FORWARD_PROC_SYMBOL(public_411a70);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_410790 _public_410790
#define public_4107af _public_4107af
#define public_4107db _public_4107db
#define public_4107e0 _public_4107e0
#define public_410800 _public_410800

PROC_DECLARE(0x410760, internal_410760, public_410760);
extern "C" NAKED register_t __cdecl internal_410760()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_4107db
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_4107db
        cmp ebx, eax
        jne public_4107db
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4107af
        lea esp, ss:[esp]
        public_410790 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_410d10
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_410790
        public_4107af : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_4107db : nop
        cmp ecx, ebx
        je public_410800
        nop 
        public_4107e0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_411a70
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_410940
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_4107e0
        public_410800 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x410760)
    }
}

#undef public_410790
#undef public_4107af
#undef public_4107db
#undef public_4107e0
#undef public_410800
