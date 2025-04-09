#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421a70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_561f20);
CLANG_FORWARD_PROC_SYMBOL(public_57ab10);
CLANG_FORWARD_PROC_SYMBOL(public_59a110);
CLANG_FORWARD_PROC_SYMBOL(public_59daa0);

#define public_59a2b4 _public_59a2b4
#define public_59a2c8 _public_59a2c8
#define public_59a2e9 _public_59a2e9
#define public_59a309 _public_59a309
#define public_59a310 _public_59a310
#define public_59a3bb _public_59a3bb

PROC_DECLARE(0x59a260, internal_59a260, public_59a260);
extern "C" NAKED register_t __cdecl internal_59a260()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        call public_59daa0
        cmp eax, esi
        mov eax, dword ptr ds : [public_679ba4]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        sete bl
        call public_561f20
        mov al, byte ptr ds : [esi+0x498]
        add esp, 8
        test al, al
        je public_59a2e9
        test bl, bl
        je public_59a2c8
        mov cl, byte ptr ds : [esi+0x4C1]
        mov eax, dword ptr ss : [esp+8]
        cmp cl, al
        mov cl, byte ptr ss : [esp+0xA]
        jne public_59a2b4
        cmp byte ptr ds : [esi+0x4C2], ah
        jne public_59a2b4
        cmp byte ptr ds : [esi+0x4C3], cl
        je public_59a310
        public_59a2b4 : nop
        mov byte ptr ds : [esi+0x4C1], al
        mov byte ptr ds : [esi+0x4C2], ah
        mov byte ptr ds : [esi+0x4C3], cl
        jmp public_59a309
        public_59a2c8 : nop
        mov edx, dword ptr ds : [esi+0x4C1]
        xor edx, dword ptr ds : [public_67dbad]
        test edx, 0xFFFFFF
        je public_59a310
        mov eax, dword ptr ds : [public_67dbac]
        mov dword ptr ds : [esi+0x4C0], eax
        jmp public_59a309
        public_59a2e9 : nop
        mov ecx, dword ptr ds : [esi+0x4C1]
        xor ecx, dword ptr ds : [public_67dba5]
        test ecx, 0xFFFFFF
        je public_59a310
        mov edx, dword ptr ds : [public_67dba4]
        mov dword ptr ds : [esi+0x4C0], edx
        public_59a309 : nop
        mov ecx, esi
        call public_59a110
        public_59a310 : nop
        mov al, byte ptr ds : [public_67dbc4]
        test al, al
        je public_59a3bb
        fld dword ptr ds : [esi+0x49C]
        push edi
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x4A0]
        lea eax, ds:[esi+0x3C]
        push eax
        fchs 
/*FIXUP push offset public_67dbf8 @0x59a334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fstp dword ptr ss : [esp+0x1C]
        call public_422690
        push 0xDE1
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xBE2
        call public_421ed0
        push 0
        push 0
        push 0xFF
        call public_421a70
        push 7
        call public_421670
        push 0
        push 0
        push 0
        call public_421cc0
        mov edi, dword ptr ss : [esp+0x44]
        push 0
        push 0
        push edi
        call public_421cc0
        mov ebx, dword ptr ss : [esp+0x54]
        add esp, 0x40
        push 0
        push ebx
        push edi
        call public_421cc0
        push 0
        push ebx
        push 0
        call public_421cc0
        add esp, 0x18
        call public_421690
        pop edi
        public_59a3bb : nop
        mov ecx, esi
        call public_57ab10
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x59a260)
    }
}

#undef public_59a2b4
#undef public_59a2c8
#undef public_59a2e9
#undef public_59a309
#undef public_59a310
#undef public_59a3bb
