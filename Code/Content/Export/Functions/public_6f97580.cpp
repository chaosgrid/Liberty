#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6efd1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f35890);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f862e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f936d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f97580);
CLANG_FORWARD_PROC_SYMBOL(public_6fa13d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa1760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1711);

#define public_6f975b0 _public_6f975b0
#define public_6f97603 _public_6f97603
#define public_6f9761d _public_6f9761d
#define public_6f9767f _public_6f9767f
#define public_6f97696 _public_6f97696
#define public_6f976a3 _public_6f976a3
#define public_6f976b4 _public_6f976b4
#define public_6f976c8 _public_6f976c8
#define public_6f97718 _public_6f97718
#define public_6f9772f _public_6f9772f
#define public_6f97765 _public_6f97765
#define public_6f97781 _public_6f97781
#define public_6f97798 _public_6f97798
#define public_6f977f0 _public_6f977f0
#define public_6f97831 _public_6f97831
#define public_6f97869 _public_6f97869
#define public_6f978cb _public_6f978cb
#define public_6f97927 _public_6f97927
#define public_6f97941 _public_6f97941
#define public_6f9795a _public_6f9795a
#define public_6f97997 _public_6f97997

PROC_DECLARE(0x6f97580, internal_6f97580, public_6f97580);
extern "C" NAKED register_t __cdecl internal_6f97580()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb1711 @0x6f97588*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1711
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], esp
        sub esp, 0x120
        push ebx
        push ebp
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        jne public_6f975b0
        xor al, al
        jmp public_6f97997
        public_6f975b0 : nop
        lea eax, ss:[esp+0x144]
        push eax
        call public_6f50650
        mov ebp, dword ptr ds : [public_6fb3000]
/*FIXUP push offset public_6fbcbdc @0x6f975c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcbdc
        mov edi, eax
        call ebp
        mov ecx, dword ptr ss : [esp+0x148]
        add esp, 8
        lea esi, ds:[ecx+0x80]
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call public_6f4f3d0
        push esi
        call public_6efd1a0
        mov edx, dword ptr ds : [eax+0x38]
        add esp, 4
        cmp edx, ebx
        jne public_6f97603
        mov dword ptr ss : [esp+0x18], ebx
        jmp public_6f9761d
        public_6f97603 : nop
        mov ecx, dword ptr ds : [eax+0x3C]
        sub ecx, edx
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x18], edx
        public_6f9761d : nop
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x20], cl
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
/*FIXUP push offset public_6fbcbe8 @0x6f97631*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcbe8
        mov dword ptr ss : [esp+0x13C], ebx
        call ebp
        add esp, 4
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5f30
        mov ecx, dword ptr ss : [esp+0x28]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f9767f
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6eae440
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6eb5f30
        jmp public_6f97696
        public_6f9767f : nop
        lea edx, ss:[esp+0x12]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x1A], bl
        call public_6fa6e80
        public_6f97696 : nop
        mov edi, dword ptr ss : [esp+0x14C]
        cmp edi, ebx
        jne public_6f976b4
        xor eax, eax
        public_6f976a3 : nop
        mov cl, byte ptr ds : [eax+public_6fbcd04]
        mov byte ptr ss : [esp+eax+0x38], cl
        inc eax
        cmp cl, bl
        jne public_6f976a3
        jmp public_6f976c8
        public_6f976b4 : nop
        push edi
        lea ecx, ss:[esp+0x3C]
/*FIXUP push offset public_6fbcd00 @0x6f976b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd00
        push ecx
        call dword ptr ds : [public_6fb3360]
        add esp, 0xC
        public_6f976c8 : nop
        lea edx, ss:[esp+0x38]
        push edx
        call ebp
        mov dword ptr ss : [esp+0x18], eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6eb5f30
        mov ecx, dword ptr ss : [esp+0x28]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f97718
        lea edx, ss:[esp+0x14]
        push edx
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6eae440
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6eb5f30
        mov dword ptr ss : [esp+0x30], eax
        mov byte ptr ss : [esp+0x34], 1
        jmp public_6f9772f
        public_6f97718 : nop
        lea ecx, ss:[esp+0x12]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x1A], bl
        call public_6fa6e80
        public_6f9772f : nop
        mov ecx, dword ptr ss : [esp+0x144]
        or ebp, 0xFFFFFFFF
        push ebp
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        call public_6f35890
        mov esi, eax
        add esp, 0xC
        cmp esi, ebx
        jne public_6f97765
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x138], ebp
        call public_6eec8d0
        xor al, al
        jmp public_6f97997
        public_6f97765 : nop
        cmp byte ptr ss : [esp+0x16C], bl
        je public_6f97798
        cmp edi, ebx
        je public_6f97781
        mov eax, dword ptr ds : [esi+0x24]
        sub eax, edi
        cdq 
        xor eax, edx
        sub eax, edx
        cmp eax, 2
        jl public_6f97798
        public_6f97781 : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x138], ebp
        call public_6eec8d0
        xor al, al
        jmp public_6f97997
        public_6f97798 : nop
        lea ecx, ss:[esp+0x40]
        call public_6f862e0
        mov ecx, dword ptr ss : [esp+0x164]
        mov edx, dword ptr ss : [esp+0x144]
        mov ebp, dword ptr ss : [esp+0x150]
        cmp ecx, ebx
        setne byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x90], 1
        mov dword ptr ss : [esp+0xC8], edx
        mov eax, dword ptr ds : [esi]
        xor edi, edi
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x138], 1
        mov dword ptr ss : [esp+0xD0], eax
        mov byte ptr ss : [esp+0x12], 1
        jle public_6f97927
        lea esp, ss:[esp]
        public_6f977f0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, eax
        dec eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], eax
        jle public_6f97927
        cmp byte ptr ss : [esp+0x12], bl
        je public_6f97869
        cmp byte ptr ss : [esp+0x13], bl
        mov byte ptr ss : [esp+0x12], bl
        je public_6f97831
        mov edx, dword ptr ss : [esp+0x164]
        mov eax, dword ptr ss : [esp+0x128]
        push edx
        push 1
        push eax
        lea ecx, ss:[esp+0x12C]
        call public_6fa13d0
        public_6f97831 : nop
        mov eax, dword ptr ss : [esp+0x15C]
        cmp eax, 2
        mov ecx, dword ptr ss : [esp+0x154]
        mov dword ptr ss : [esp+0x118], ecx
        mov dword ptr ss : [esp+0x11C], eax
        jne public_6f978cb
        mov edx, dword ptr ss : [esp+0x168]
        mov byte ptr ss : [esp+0x90], bl
        mov dword ptr ss : [esp+0x114], edx
        jmp public_6f978cb
        public_6f97869 : nop
        mov eax, dword ptr ss : [esp+0x124]
        push eax
        mov eax, dword ptr ss : [esp+0x12C]
        push eax
        push eax
        call public_6f93d80
        mov ecx, dword ptr ss : [esp+0x134]
        add esp, 0xC
        push ecx
        mov esi, eax
        push esi
        lea ecx, ss:[esp+0x128]
        call public_6f936d0
        mov edx, dword ptr ss : [esp+0x158]
        mov eax, dword ptr ss : [esp+0x160]
        mov dword ptr ss : [esp+0x128], esi
        mov dword ptr ss : [esp+0x118], edx
        mov dword ptr ss : [esp+0x11C], eax
        mov byte ptr ss : [esp+0x90], 1
        mov dword ptr ss : [esp+0x114], ebx
        public_6f978cb : nop
        mov eax, dword ptr ds : [public_6fd3d84]
        mov ecx, eax
        push ecx
        inc eax
/*FIXUP push offset public_6fbccd8 @0x6f978d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbccd8
/*FIXUP push offset public_6fd3d20 @0x6f978d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd3d20
        mov dword ptr ds : [public_6fd3d84], eax
        call dword ptr ds : [public_6fb3360]
/*FIXUP push offset public_6fd3d20 @0x6f978e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd3d20
        lea ecx, ss:[esp+0x58]
        push 0x30
        push ecx
        call public_6ea9f40
        mov edx, dword ptr ss : [esp+0x158]
        add esp, 0x18
        lea ecx, ds:[edx+0x84]
        lea edx, ss:[esp+0x40]
        push edx
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_6fa1760
        inc edi
        cmp edi, ebp
        jl public_6f977f0
        public_6f97927 : nop
        mov edi, dword ptr ss : [esp+0x128]
        mov esi, dword ptr ss : [esp+0x124]
        cmp esi, edi
        mov byte ptr ss : [esp+0x138], 2
        je public_6f9795a
        public_6f97941 : nop
        push ebx
        mov ecx, esi
        call public_6f94b00
        add esi, 0x108
        cmp esi, edi
        jne public_6f97941
        mov esi, dword ptr ss : [esp+0x124]
        public_6f9795a : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x124], ebx
        mov dword ptr ss : [esp+0x128], ebx
        mov dword ptr ss : [esp+0x12C], ebx
        mov byte ptr ss : [esp+0x138], bl
        call public_6ed2c20
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov al, 1
        public_6f97997 : nop
        mov ecx, dword ptr ss : [esp+0x130]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x12C
        ret 
        UNREACHABLE_TRAP(0x6f97580)
    }
}

#undef public_6f975b0
#undef public_6f97603
#undef public_6f9761d
#undef public_6f9767f
#undef public_6f97696
#undef public_6f976a3
#undef public_6f976b4
#undef public_6f976c8
#undef public_6f97718
#undef public_6f9772f
#undef public_6f97765
#undef public_6f97781
#undef public_6f97798
#undef public_6f977f0
#undef public_6f97831
#undef public_6f97869
#undef public_6f978cb
#undef public_6f97927
#undef public_6f97941
#undef public_6f9795a
#undef public_6f97997
