#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f29320);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ca40);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cf50);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d360);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e290);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae490);

#define public_6f293a1 _public_6f293a1
#define public_6f293f0 _public_6f293f0
#define public_6f2942c _public_6f2942c
#define public_6f2942e _public_6f2942e
#define public_6f29492 _public_6f29492
#define public_6f294d5 _public_6f294d5

PROC_DECLARE(0x6f29320, internal_6f29320, public_6f29320);
extern "C" NAKED register_t __cdecl internal_6f29320()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae490 @0x6f29322*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae490
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x50
        mov al, byte ptr ss : [esp+0x60]
        push ebx
        xor ebx, ebx
        push esi
        push ebx
        push ebx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x28], al
        call public_6f93790
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        mov cl, byte ptr ss : [esp+0x68]
        mov dl, byte ptr ss : [esp+0x68]
        mov byte ptr ss : [esp+0x44], cl
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x60], ebx
        mov byte ptr ss : [esp+0x45], dl
        mov byte ptr ss : [esp+0x50], bl
        call public_6f2e290
        mov esi, dword ptr ss : [esp+0x68]
        mov ecx, esi
        mov byte ptr ss : [esp+0x60], 1
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f29492
        push ebp
        mov ebp, dword ptr ds : [public_6fb3628]
        push edi
/*FIXUP public_6f293a1 : nop
        push offset public_6fb9260 @0x6f293a1*/
  FIXUP public_6f293a1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9260
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f2942e
        mov edi, dword ptr ds : [public_6fb3048]
        push ebx
        mov ecx, esi
        call edi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call ebp
        add esp, 8
        push 1
        mov ecx, esi
        call edi
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        call ebp
        add esp, 8
        mov edi, 2
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f2942c
        nop 
        public_6f293f0 : nop
        mov eax, edi
        push eax
        mov ecx, esi
        inc edi
        call dword ptr ds : [public_6fb3048]
        push eax
        lea edx, ss:[esp+0x74]
        push edx
        call ebp
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 8
        lea eax, ss:[esp+0x70]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x34]
        call public_6f1e390
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f293f0
        public_6f2942c : nop
        xor ebx, ebx
        public_6f2942e : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x38], eax
        call public_6f0deb0
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x70], 2
        call public_6f2d4b0
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x68], 1
        call public_6f15350
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6fa8370
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f293a1
        pop edi
        pop ebp
        public_6f29492 : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, 0x3FFFFFFF
        je public_6f294d5
        lea edx, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x30], eax
        call public_6f2d360
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        mov byte ptr ss : [esp+0x68], 3
        call public_6f2cf50
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x60], 1
        call public_6f2ca40
        public_6f294d5 : nop
        lea edx, ss:[esp+0x68]
        push edx
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x64], bl
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0x50]
        call public_6f2d6c0
        mov ecx, dword ptr ss : [esp+0x48]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        push eax
        mov dword ptr ss : [esp+0x50], ebx
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea eax, ss:[esp+0x70]
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x5C]
        add esp, 4
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x5C
        ret 
        UNREACHABLE_TRAP(0x6f29320)
    }
}

#undef public_6f293a1
#undef public_6f293f0
#undef public_6f2942c
#undef public_6f2942e
#undef public_6f29492
#undef public_6f294d5
