#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_539231 _public_539231
#define public_539246 _public_539246
#define public_53924f _public_53924f
#define public_539253 _public_539253
#define public_539268 _public_539268
#define public_539279 _public_539279
#define public_539290 _public_539290

PROC_DECLARE(0x539220, internal_539220, public_539220);
extern "C" NAKED register_t __cdecl internal_539220()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_5de754
        je public_539253
        public_539231 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_539246
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_53924f
        public_539246 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_53924f : nop
        test edi, edi
        jne public_539231
        public_539253 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_539279
        public_539268 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        jne public_539268
        public_539279 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_539290
        push esi
        call public_5b7e1d
        add esp, 4
        public_539290 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x539220)
    }
}

#undef public_539231
#undef public_539246
#undef public_53924f
#undef public_539253
#undef public_539268
#undef public_539279
#undef public_539290
