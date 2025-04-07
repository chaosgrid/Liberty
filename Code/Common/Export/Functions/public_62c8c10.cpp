#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8280);
CLANG_FORWARD_PROC_SYMBOL(public_62e8830);
CLANG_FORWARD_PROC_SYMBOL(public_62ecb20);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c8c54 _public_62c8c54
#define public_62c8c61 _public_62c8c61
#define public_62c8c99 _public_62c8c99
#define public_62c8cb8 _public_62c8cb8
#define public_62c8cba _public_62c8cba
#define public_62c8cc6 _public_62c8cc6
#define public_62c8ce2 _public_62c8ce2
#define public_62c8ce4 _public_62c8ce4
#define public_62c8d50 _public_62c8d50
#define public_62c8d51 _public_62c8d51
#define public_62c8d68 _public_62c8d68

PROC_DECLARE(0x62c8c10, internal_62c8c10, public_62c8c10);
extern "C" NAKED register_t __cdecl internal_62c8c10()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        mov ebx, 2
        test bl, al
        je public_62c8c61
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, 1
        cmp eax, ecx
        jne public_62c8c61
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_62c8c61
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c8c61
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62c8c54
        mov eax, 3
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebx
        add esp, 0x14
        ret 4
        public_62c8c54 : nop
        mov dword ptr ds : [esi+0xC], ecx
        pop esi
        mov eax, ecx
        pop ebx
        add esp, 0x14
        ret 4
        public_62c8c61 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        call public_62ecb20
        test al, al
        jne public_62c8d51
        mov eax, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+0x260]
        test ecx, ecx
        je public_62c8c99
        mov dword ptr ss : [esp+8], ecx
        mov cl, byte ptr ds : [eax+0x264]
        test cl, cl
        jne public_62c8d51
        public_62c8c99 : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [eax+0x16E4]
        push edi
        push edx
        lea ecx, ds:[eax+0x34]
        call public_62e8280
        test eax, eax
        lea edi, ds:[esi+0x30]
        je public_62c8cb8
        add eax, 8
        jmp public_62c8cba
        public_62c8cb8 : nop
        xor eax, eax
        public_62c8cba : nop
        cmp eax, dword ptr ds : [edi]
        je public_62c8cc6
        push eax
        mov ecx, edi
        call public_6341610
        public_62c8cc6 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62c8d50
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c8d50
        mov edi, dword ptr ds : [edi]
        test edi, edi
        je public_62c8ce2
        lea ecx, ds:[edi-8]
        jmp public_62c8ce4
        public_62c8ce2 : nop
        xor ecx, ecx
        public_62c8ce4 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [eax+0x88]
        test dword ptr ss : [esp+0xC], 0x30000
        je public_62c8d50
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fcomp dword ptr ds : [public_639f9c8]
        fnstsw ax
        test ah, 0x41
        jne public_62c8d50
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        call public_62e8830
        neg al
        sbb eax, eax
        inc eax
        mov ebx, eax
        public_62c8d50 : nop
        pop edi
        public_62c8d51 : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62c8d68
        mov eax, 3
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebx
        add esp, 0x14
        ret 4
        public_62c8d68 : nop
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62c8c10)
    }
}

#undef public_62c8c54
#undef public_62c8c61
#undef public_62c8c99
#undef public_62c8cb8
#undef public_62c8cba
#undef public_62c8cc6
#undef public_62c8ce2
#undef public_62c8ce4
#undef public_62c8d50
#undef public_62c8d51
#undef public_62c8d68
