#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285df0);
CLANG_FORWARD_PROC_SYMBOL(public_628c900);
CLANG_FORWARD_PROC_SYMBOL(public_634c6d0);
CLANG_FORWARD_PROC_SYMBOL(public_634cb20);
CLANG_FORWARD_PROC_SYMBOL(public_634cba0);
CLANG_FORWARD_PROC_SYMBOL(public_634cc70);
CLANG_FORWARD_PROC_SYMBOL(public_634ce60);
CLANG_FORWARD_PROC_SYMBOL(public_634d050);
CLANG_FORWARD_PROC_SYMBOL(public_6350610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639346b);

#define public_628c95f _public_628c95f
#define public_628c961 _public_628c961
#define public_628ca61 _public_628ca61

PROC_DECLARE(0x628c900, internal_628c900, public_628c900);
extern "C" NAKED register_t __cdecl internal_628c900()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639346b @0x628c908*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639346b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        lea ecx, ds:[eax+1]
        mov dword ptr ds : [esi+0x40], ecx
        jne public_628ca61
        lea ecx, ss:[esp+0x18]
        call public_6350610
        lea edx, ds:[esi+0xC]
        push 0xC
        mov dword ptr ss : [esp+0x2C], edx
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x50], 0
        je public_628c95f
        mov ecx, eax
        call public_6285df0
        jmp public_628c961
        public_628c95f : nop
        xor eax, eax
        public_628c961 : nop
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x30], eax
        call public_634cc70
        push 0x11C2DE34
/*FIXUP push offset public_639c3e0 @0x628c977*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c3e0
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, eax
        call public_634cba0
        fld dword ptr ds : [public_639a1d0]
        mov dword ptr ds : [esi+0x18], eax
        fdiv dword ptr ds : [public_63eb318]
        mov edx, dword ptr ds : [public_63eb31c]
        push ecx
        mov dword ptr ds : [public_658ab3c], edx
        mov ecx, dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp]
        call public_634c6d0
        mov eax, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [public_63eb340]
        mov dword ptr ds : [eax+0x20], ecx
        mov edx, dword ptr ds : [public_63eb344]
        mov dword ptr ds : [eax+0x24], edx
        mov ecx, dword ptr ds : [public_63eb348]
        mov dword ptr ds : [eax+0x28], ecx
        mov edx, dword ptr ds : [public_63eb34c]
        mov dword ptr ds : [eax+0x2C], edx
        mov ecx, dword ptr ds : [public_63fc0f8]
        mov dword ptr ds : [eax+0x30], ecx
        mov edx, dword ptr ds : [public_63eb350]
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, dword ptr ds : [public_63eb354]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ds : [public_63eb358]
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, dword ptr ds : [public_63eb35c]
        mov dword ptr ds : [eax+0x18], ecx
        mov edx, dword ptr ds : [public_63fc0f4]
        mov dword ptr ds : [eax+0x1C], edx
        mov ecx, dword ptr ds : [esi+0x18]
        lea eax, ss:[esp+8]
        push eax
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        call public_634cb20
        mov ecx, dword ptr ds : [esi+0x18]
        push esi
        call public_634ce60
        lea ecx, ds:[esi+4]
        push ecx
        mov ecx, dword ptr ds : [esi+0x18]
        call public_634d050
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ds : [public_63eb320]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [public_63eb324]
        mov dword ptr ds : [eax+0x10], edx
        public_628ca61 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x628c900)
    }
}

#undef public_628c95f
#undef public_628c961
#undef public_628ca61
