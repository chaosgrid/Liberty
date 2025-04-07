#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262630);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_63222f0);
CLANG_FORWARD_PROC_SYMBOL(public_6341790);
CLANG_FORWARD_PROC_SYMBOL(public_6341d50);
CLANG_FORWARD_PROC_SYMBOL(public_6341e10);
CLANG_FORWARD_PROC_SYMBOL(public_6342020);
CLANG_FORWARD_PROC_SYMBOL(public_6342820);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6397917);

#define public_63417f0 _public_63417f0
#define public_6341820 _public_6341820
#define public_63418c7 _public_63418c7
#define public_6341912 _public_6341912
#define public_6341923 _public_6341923
#define public_6341935 _public_6341935
#define public_6341983 _public_6341983
#define public_63419ec _public_63419ec

PROC_DECLARE(0x6341790, internal_6341790, public_6341790);
extern "C" NAKED register_t __cdecl internal_6341790()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6397917 @0x6341798*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397917
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15B0
        mov dword ptr fs : [0], esp
        call public_6391dc0
        push ebx
        push esi
        lea ecx, ss:[esp+0x50]
        call public_630f660
        mov esi, dword ptr ss : [esp+0x15C8]
        xor ebx, ebx
        push ebx
        push esi
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x15C8], ebx
        call public_630f9b0
        test al, al
        je public_6341983
        lea ecx, ss:[esp+0x50]
        call public_6310070
        test al, al
        je public_6341935
        push edi
        nop 
/*FIXUP public_63417f0 : nop
        push offset public_63a53a8 @0x63417f0*/
  FIXUP public_63417f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a53a8
        lea ecx, ss:[esp+0x58]
        call public_63103c0
        test al, al
        je public_6341923
        lea ecx, ss:[esp+0x54]
        xor esi, esi
        call public_6310170
        test al, al
        je public_6341923
        lea esp, ss:[esp]
/*FIXUP public_6341820 : nop
        push offset public_63994e8 @0x6341820*/
  FIXUP public_6341820 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        lea ecx, ss:[esp+0x58]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x54]
        je public_63418c7
        call public_6310b70
        push eax
        call public_630d3f0
        mov cl, byte ptr ss : [esp+0x13]
        mov esi, eax
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x25], cl
        add esp, 4
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x20], al
        mov byte ptr ss : [esp+0x2C], bl
        call public_6342820
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x15C8], 1
        mov dword ptr ss : [esp+0x38], esi
        call public_6342020
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_658a9c0
        mov byte ptr ss : [esp+0x15CC], 2
        call public_6341e10
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x15C4], 1
        call public_6341d50
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x15C4], bl
        call public_6341d50
        mov edx, dword ptr ss : [esp+0x10]
        lea esi, ds:[edx+0x10]
        jmp public_6341912
/*FIXUP public_63418c7 : nop
        push offset public_63a539c @0x63418c7*/
  FIXUP public_63418c7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a539c
        call public_6310410
        test al, al
        je public_6341912
        cmp esi, ebx
        je public_6341912
        push ebx
        lea ecx, ss:[esp+0x58]
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        push 1
        lea ecx, ss:[esp+0x58]
        mov edi, eax
        call public_63108f0
        fstp dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], edi
        call public_63222f0
        public_6341912 : nop
        lea ecx, ss:[esp+0x54]
        call public_6310170
        test al, al
        jne public_6341820
        public_6341923 : nop
        lea ecx, ss:[esp+0x54]
        call public_6310070
        test al, al
        jne public_63417f0
        pop edi
        public_6341935 : nop
        mov ebx, 3
        lea edx, ss:[esp+0x1478]
        mov dword ptr ss : [esp+0x15C0], ebx
        mov dword ptr ss : [esp+0xC], edx
        lea ecx, ss:[esp+0x1478]
        mov byte ptr ss : [esp+0x15C0], 4
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x147C]
        mov byte ptr ss : [esp+0x15C4], bl
        call dword ptr ds : [public_63991b8]
        mov dword ptr ss : [esp+0x15C0], 5
        jmp public_63419ec
        public_6341983 : nop
        push esi
        push 0x48
/*FIXUP push offset public_63a5370 @0x6341986*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a5370
        mov eax, 0x100001
/*FIXUP push offset public_63a5338 @0x6341990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a5338
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov ebx, 6
        lea ecx, ss:[esp+0x1478]
        mov dword ptr ss : [esp+0x15C0], ebx
        mov dword ptr ss : [esp+0xC], ecx
        lea ecx, ss:[esp+0x1478]
        mov byte ptr ss : [esp+0x15C0], 7
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x147C]
        mov byte ptr ss : [esp+0x15C4], bl
        call dword ptr ds : [public_63991b8]
        mov dword ptr ss : [esp+0x15C0], 8
        public_63419ec : nop
        lea ecx, ss:[esp+0x50]
        call public_6262630
        lea ecx, ss:[esp+0x50]
        push 1
        mov dword ptr ss : [esp+0x15C4], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ss : [esp+0x15B8]
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15BC
        ret 
        UNREACHABLE_TRAP(0x6341790)
    }
}

#undef public_63417f0
#undef public_6341820
#undef public_63418c7
#undef public_6341912
#undef public_6341923
#undef public_6341935
#undef public_6341983
#undef public_63419ec
