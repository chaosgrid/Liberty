#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98540);
CLANG_FORWARD_PROC_SYMBOL(public_6f9faa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb17a0);

#define public_6f98578 _public_6f98578
#define public_6f985a0 _public_6f985a0
#define public_6f985fa _public_6f985fa
#define public_6f986f0 _public_6f986f0
#define public_6f9872a _public_6f9872a
#define public_6f9873c _public_6f9873c
#define public_6f9874f _public_6f9874f

PROC_DECLARE(0x6f98540, internal_6f98540, public_6f98540);
extern "C" NAKED register_t __cdecl internal_6f98540()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb17a0 @0x6f98548*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb17a0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x5C
        push edi
        mov edi, dword ptr ss : [esp+0x70]
        mov ecx, edi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f9874f
        push ebx
        mov ebx, dword ptr ds : [public_6fb3018]
        push ebp
        push esi
        xor esi, esi
/*FIXUP public_6f98578 : nop
        push offset public_6fbcd28 @0x6f98578*/
  FIXUP public_6f98578 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd28
        mov ecx, edi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f9873c
        mov ecx, edi
        call ebx
        test al, al
        je public_6f9873c
        lea esp, ss:[esp]
/*FIXUP public_6f985a0 : nop
        push offset public_6fbcd20 @0x6f985a0*/
  FIXUP public_6f985a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd20
        mov ecx, edi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f9872a
        push esi
        mov ecx, edi
        mov dword ptr ss : [esp+0x80], 1
        call dword ptr ds : [public_6fb3020]
        mov ebx, eax
        mov al, byte ptr ss : [esp+0x7C]
        mov byte ptr ss : [esp+0x24], al
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x74], esi
        mov dword ptr ss : [esp+0x44], ebx
        mov byte ptr ss : [esp+0x48], al
        call public_6fa3db0
        cmp eax, esi
        jge public_6f985fa
        xor eax, eax
        public_6f985fa : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 4
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x58], eax
        call public_6eed270
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], eax
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_6fd3cd4
        mov byte ptr ss : [esp+0x7C], 1
        call public_6fa0aa0
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0x54], esi
        mov dword ptr ss : [esp+0x58], esi
        mov dword ptr ss : [esp+0x5C], esi
        call public_6fa8fe0
        mov cl, byte ptr ss : [esp+0x84]
        add esp, 8
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        mov byte ptr ss : [esp+0x34], cl
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x40], esi
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x78], 2
        mov dword ptr ss : [esp+0x5C], ebx
        call public_6eb35b0
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, offset public_6fd3cd4
        mov byte ptr ss : [esp+0x7C], 3
        call public_6f9faa0
        mov ebp, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x74], 2
        call public_6eec8d0
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call public_6eec8d0
        push 1
        mov ecx, edi
        add ebp, 0x10
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f9872a
        lea ebx, ds:[ebx]
        public_6f986f0 : nop
        mov ebx, dword ptr ss : [esp+0x7C]
        mov eax, ebx
        inc ebx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x80], ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f986f0
        public_6f9872a : nop
        mov ebx, dword ptr ds : [public_6fb3018]
        mov ecx, edi
        call ebx
        test al, al
        jne public_6f985a0
        public_6f9873c : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f98578
        pop esi
        pop ebp
        pop ebx
        public_6f9874f : nop
        mov ecx, dword ptr ss : [esp+0x60]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 
        UNREACHABLE_TRAP(0x6f98540)
    }
}

#undef public_6f98578
#undef public_6f985a0
#undef public_6f985fa
#undef public_6f986f0
#undef public_6f9872a
#undef public_6f9873c
#undef public_6f9874f
