#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346340);
CLANG_FORWARD_PROC_SYMBOL(public_63572b0);
CLANG_FORWARD_PROC_SYMBOL(public_6358070);
CLANG_FORWARD_PROC_SYMBOL(public_6358270);
CLANG_FORWARD_PROC_SYMBOL(public_63582f0);

#define public_63580cb _public_63580cb
#define public_63580d2 _public_63580d2
#define public_63581e8 _public_63581e8
#define public_6358240 _public_6358240

PROC_DECLARE(0x6358070, internal_6358070, public_6358070);
extern "C" NAKED register_t __cdecl internal_6358070()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xEC]
        mov ecx, dword ptr ds : [eax]
        shl ecx, 0x1C
        sar ecx, 0x1E
        mov edx, 1
        sub edx, ecx
        add word ptr ds : [eax+0x64], dx
        mov eax, dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ds : [eax]
        shl ecx, 0x1C
        sar ecx, 0x1E
        mov edx, 1
        sub edx, ecx
        add word ptr ds : [eax+0x64], dx
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        push edi
        je public_6358240
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        jne public_63580cb
        xor edi, edi
        mov ecx, 1
        jmp public_63580d2
        public_63580cb : nop
        mov edi, 1
        xor ecx, ecx
        public_63580d2 : nop
        mov ebx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [ebx+edi*4]
        test byte ptr ds : [eax], 0xC
        jne public_6358240
        mov edx, ecx
        shl edx, 4
        fld dword ptr ds : [edx+esi+0x28]
        lea eax, ds:[edx+esi]
        fld dword ptr ds : [eax+0x24]
        mov edx, dword ptr ds : [eax+0x2C]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x60], edx
        fstp dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0x4C]
        fld dword ptr ds : [eax+0x48]
        mov dword ptr ss : [esp+0x60], edx
        fld dword ptr ds : [eax+0x44]
        mov eax, edx
        mov dword ptr ss : [esp+0x24], eax
        fstp dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+edi*4+0xEC]
        fld dword ptr ds : [eax+0x98]
        mov edx, dword ptr ds : [eax+0x9C]
        fld dword ptr ds : [eax+0x94]
        add eax, 0x94
        mov eax, edx
        mov dword ptr ss : [esp+0x34], eax
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x60], edx
        fstp dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi+edi*4+0xEC]
        mov edx, dword ptr ds : [eax+0xAC]
        fld dword ptr ds : [eax+0xA8]
        fld dword ptr ds : [eax+0xA4]
        add eax, 0xA4
        mov eax, edx
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x44], eax
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        fstp dword ptr ss : [esp+0x48]
        lea eax, ss:[esp+0x38]
        push eax
        fstp dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [esi+ecx*4+0xF4]
        lea edx, ss:[esp+0x4C]
        push edx
        mov edx, dword ptr ds : [esi+edi*4+0xF4]
        push eax
        mov eax, dword ptr ds : [esi+ecx*4+0xEC]
        mov ecx, dword ptr ds : [esi+edi*4+0xEC]
        push edx
        push eax
        push ecx
        call public_6346340
        fld dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [esi+0x108]
        fmul dword ptr ds : [eax+4]
        add esp, 0x24
        test edi, edi
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ds : [eax]
        faddp 
        je public_63581e8
        fmul dword ptr ds : [public_63a5498]
        public_63581e8 : nop
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_63a566c]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6358240
        mov edx, dword ptr ds : [esi+0xEC]
        mov eax, dword ptr ds : [edx+0xC]
        inc dword ptr ds : [eax+0x5C]
        mov ecx, esi
        mov dword ptr ds : [ebx+edi*4], 0
        call public_63582f0
        mov eax, 1
        sub eax, edi
        push eax
        mov ecx, esi
        call public_63572b0
        push edi
        mov ecx, esi
        call public_6358270
        mov esi, dword ptr ds : [esi+edi*4+0xEC]
        dec word ptr ds : [esi+0x64]
        pop edi
        pop esi
        pop ebx
        add esp, 0x50
        ret 4
        public_6358240 : nop
        mov ecx, esi
        call public_63582f0
        push 0
        mov ecx, esi
        call public_63572b0
        push 1
        mov ecx, esi
        call public_63572b0
        pop edi
        pop esi
        pop ebx
        add esp, 0x50
        ret 4
        UNREACHABLE_TRAP(0x6358070)
    }
}

#undef public_63580cb
#undef public_63580d2
#undef public_63581e8
#undef public_6358240
