#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4569b0);

#define public_457796 _public_457796
#define public_4577a4 _public_4577a4
#define public_4577b2 _public_4577b2
#define public_4577c0 _public_4577c0
#define public_4577ce _public_4577ce
#define public_4577dc _public_4577dc
#define public_4577ea _public_4577ea
#define public_4577f7 _public_4577f7

PROC_DECLARE(0x457760, internal_457760, public_457760);
extern "C" NAKED register_t __cdecl internal_457760()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+0x10]
        test bl, 1
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        je public_457796
        fld dword ptr ds : [edi]
        mov al, byte ptr ds : [esi+0x72]
        test al, al
        fst dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [esi+0x84]
        je public_457796
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov ecx, offset public_66d2d0
        call public_4569b0
        public_457796 : nop
        test bl, 2
        je public_4577a4
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+0x88], ecx
        public_4577a4 : nop
        test bl, 4
        je public_4577b2
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+0x8C], edx
        public_4577b2 : nop
        test bl, 8
        je public_4577c0
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0x90], eax
        public_4577c0 : nop
        test bl, 0x10
        je public_4577ce
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x94], ecx
        public_4577ce : nop
        test bl, 0x20
        je public_4577dc
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x98], edx
        public_4577dc : nop
        test bl, 0x40
        je public_4577ea
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x9C], eax
        public_4577ea : nop
        test bl, bl
        jns public_4577f7
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0xA0], ecx
        public_4577f7 : nop
        mov edx, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        call dword ptr ds : [edx+0x54]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x457760)
    }
}

#undef public_457796
#undef public_4577a4
#undef public_4577b2
#undef public_4577c0
#undef public_4577ce
#undef public_4577dc
#undef public_4577ea
#undef public_4577f7
