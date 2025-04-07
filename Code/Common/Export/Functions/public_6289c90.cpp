#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289c90);
CLANG_FORWARD_PROC_SYMBOL(public_6349a60);
CLANG_FORWARD_PROC_SYMBOL(public_634a7d0);
CLANG_FORWARD_PROC_SYMBOL(public_634d210);
CLANG_FORWARD_PROC_SYMBOL(public_634d260);
CLANG_FORWARD_PROC_SYMBOL(public_634d470);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_63934e1);

#define public_6289d40 _public_6289d40
#define public_6289df1 _public_6289df1
#define public_6289dfb _public_6289dfb
#define public_6289e0d _public_6289e0d

PROC_DECLARE(0x6289c90, internal_6289c90, public_6289c90);
extern "C" NAKED register_t __cdecl internal_6289c90()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63934e1 @0x6289c98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63934e1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x2090
        mov dword ptr fs : [0], esp
        call public_6391dc0
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x20AC]
        push edi
        push esi
        lea ecx, ss:[esp+0x40]
        xor edi, edi
        call public_6349a60
        push 8
        lea ecx, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x20A8], edi
        call public_634d210
        mov dword ptr ss : [esp+0x3C], offset public_639c2c4
        mov eax, dword ptr ss : [esp+0x20AC]
        mov ecx, dword ptr ds : [eax+0x54]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x20A8], 1
        call public_634a7d0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20B8]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x20B4]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        lea esi, ds:[edx+0x1C]
        nop 
        lea esp, ss:[esp]
        public_6289d40 : nop
        mov eax, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6289e0d
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6289e0d
        cmp edi, ebx
        jge public_6289e0d
        mov ecx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [ecx+0xA4]
        test ecx, ecx
        je public_6289dfb
        mov dword ptr ds : [esi-0x1C], ecx
        fld dword ptr ds : [eax+0x1C]
        fld dword ptr ss : [esp+0x18]
        lea edx, ds:[esi-0x18]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fstp st(0)
        mov dword ptr ds : [edx], ecx
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        test ecx, ecx
        je public_6289df1
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi], edx
        push eax
        lea ecx, ss:[esp+0x8C]
        inc edi
        add esi, 0x20
        call public_634d470
        jmp public_6289d40
        public_6289df1 : nop
        mov dword ptr ds : [esi], 0
        inc edi
        add esi, 0x20
        public_6289dfb : nop
        push eax
        lea ecx, ss:[esp+0x8C]
        call public_634d470
        jmp public_6289d40
        public_6289e0d : nop
        mov dword ptr ss : [esp+0x3C], offset public_639c2c4
        lea ecx, ss:[esp+0x88]
        mov dword ptr ss : [esp+0x20A4], 2
        call public_634d260
        mov ecx, dword ptr ss : [esp+0x209C]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x209C
        ret 
        UNREACHABLE_TRAP(0x6289c90)
    }
}

#undef public_6289d40
#undef public_6289df1
#undef public_6289dfb
#undef public_6289e0d
