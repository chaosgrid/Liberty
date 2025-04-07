#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d41fc7);
CLANG_FORWARD_PROC_SYMBOL(public_6d441af);
CLANG_FORWARD_PROC_SYMBOL(public_6d44216);
CLANG_FORWARD_PROC_SYMBOL(public_6d442b6);
CLANG_FORWARD_PROC_SYMBOL(public_6d48515);
CLANG_FORWARD_PROC_SYMBOL(public_6d48538);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e94);
CLANG_FORWARD_PROC_SYMBOL(public_6d4908a);
CLANG_FORWARD_PROC_SYMBOL(public_6d491b4);
CLANG_FORWARD_PROC_SYMBOL(public_6d491fe);
CLANG_FORWARD_PROC_SYMBOL(public_6d49309);
CLANG_FORWARD_PROC_SYMBOL(public_6d493f8);
CLANG_FORWARD_PROC_SYMBOL(public_6d495af);

#define public_6d42031 _public_6d42031
#define public_6d42036 _public_6d42036
#define public_6d4203e _public_6d4203e
#define public_6d42044 _public_6d42044
#define public_6d42084 _public_6d42084
#define public_6d4209b _public_6d4209b
#define public_6d420b2 _public_6d420b2
#define public_6d420d2 _public_6d420d2
#define public_6d420e4 _public_6d420e4
#define public_6d420f4 _public_6d420f4
#define public_6d420fc _public_6d420fc
#define public_6d42103 _public_6d42103
#define public_6d42111 _public_6d42111
#define public_6d42123 _public_6d42123
#define public_6d4212b _public_6d4212b

PROC_DECLARE(0x6d41fc7, internal_6d41fc7, public_6d41fc7);
extern "C" NAKED register_t __cdecl internal_6d41fc7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [esi+0x11C]
        cmp al, 8
        push edi
        jae public_6d4203e
        movzx ebx, al
        mov eax, dword ptr ss : [ebp+0xC]
        push 8
        pop edi
        sub edi, ebx
        push edi
        lea eax, ds:[ebx+eax+0x20]
        push eax
        push esi
        call public_6d441af
        mov eax, dword ptr ss : [ebp+0xC]
        push edi
        add eax, 0x20
        push ebx
        push eax
        mov byte ptr ds : [esi+0x11C], 8
        call public_6d44216
        add esp, 0x18
        test eax, eax
        je public_6d4203e
        cmp ebx, 4
        jae public_6d42031
        mov eax, dword ptr ss : [ebp+0xC]
        add edi, 0xFFFFFFFC
        push edi
        add eax, 0x20
        push ebx
        push eax
        call public_6d44216
        add esp, 0xC
        test eax, eax
        je public_6d42031
/*FIXUP push offset public_6d60e28 @0x6d4202a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60e28
        jmp public_6d42036
/*FIXUP public_6d42031 : nop
        push offset public_6d60e00 @0x6d42031*/
  FIXUP public_6d42031 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60e00
        public_6d42036 : nop
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d4203e : nop
        lea ebx, ds:[esi+0x10C]
        public_6d42044 : nop
        push 4
        lea eax, ss:[ebp+8]
        push eax
        push esi
        call public_6d441af
        lea eax, ss:[ebp+8]
        push eax
        call public_6d48515
        push esi
        mov edi, eax
        call public_6d442b6
        push 4
        push ebx
        push esi
        call public_6d48538
        mov ecx, dword ptr ds : [ebx]
        mov eax, offset public_6d60d14
        add esp, 0x20
        cmp ecx, dword ptr ds : [eax]
        jne public_6d42084
        push edi
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_6d48e94
        jmp public_6d420f4
        public_6d42084 : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, offset public_6d60d2c
        cmp ecx, dword ptr ds : [eax]
        jne public_6d4209b
        push edi
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_6d4908a
        jmp public_6d420f4
        public_6d4209b : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, offset public_6d60d24
        cmp ecx, dword ptr ds : [eax]
        jne public_6d420b2
        push edi
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_6d491b4
        jmp public_6d420f4
        public_6d420b2 : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, offset public_6d60d1c
        cmp ecx, dword ptr ds : [eax]
        je public_6d42103
        push edi
        push dword ptr ss : [ebp+0xC]
        mov eax, offset public_6d60d34
        cmp ecx, dword ptr ds : [eax]
        push esi
        jne public_6d420d2
        call public_6d491fe
        jmp public_6d420f4
        public_6d420d2 : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, offset public_6d60d3c
        cmp ecx, dword ptr ds : [eax]
        jne public_6d420e4
        call public_6d49309
        jmp public_6d420f4
        public_6d420e4 : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, offset public_6d60d44
        cmp ecx, dword ptr ds : [eax]
        jne public_6d420fc
        call public_6d493f8
        public_6d420f4 : nop
        add esp, 0xC
        jmp public_6d42044
        public_6d420fc : nop
        call public_6d495af
        jmp public_6d420f4
        public_6d42103 : nop
        mov eax, dword ptr ds : [esi+0x58]
        test al, 1
        jne public_6d42111
/*FIXUP push offset public_6d60de4 @0x6d4210a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60de4
        jmp public_6d42123
        public_6d42111 : nop
        cmp byte ptr ds : [esi+0x116], 3
        jne public_6d4212b
        test al, 2
        jne public_6d4212b
/*FIXUP push offset public_6d60dc8 @0x6d4211e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60dc8
        public_6d42123 : nop
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d4212b : nop
        or dword ptr ds : [esi+0x58], 4
        mov dword ptr ds : [esi+0xFC], edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d41fc7)
    }
}

#undef public_6d42031
#undef public_6d42036
#undef public_6d4203e
#undef public_6d42044
#undef public_6d42084
#undef public_6d4209b
#undef public_6d420b2
#undef public_6d420d2
#undef public_6d420e4
#undef public_6d420f4
#undef public_6d420fc
#undef public_6d42103
#undef public_6d42111
#undef public_6d42123
#undef public_6d4212b
