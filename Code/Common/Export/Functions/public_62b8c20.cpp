#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b8ab0);
CLANG_FORWARD_PROC_SYMBOL(public_62b8c20);
CLANG_FORWARD_PROC_SYMBOL(public_62f1250);
CLANG_FORWARD_PROC_SYMBOL(public_62f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6333e50);

#define public_62b8c60 _public_62b8c60
#define public_62b8c7d _public_62b8c7d
#define public_62b8ca6 _public_62b8ca6
#define public_62b8cc5 _public_62b8cc5
#define public_62b8d12 _public_62b8d12
#define public_62b8d2a _public_62b8d2a
#define public_62b8d48 _public_62b8d48
#define public_62b8d80 _public_62b8d80
#define public_62b8d8c _public_62b8d8c
#define public_62b8d9b _public_62b8d9b
#define public_62b8dd1 _public_62b8dd1

PROC_DECLARE(0x62b8c20, internal_62b8c20, public_62b8c20);
extern "C" NAKED register_t __cdecl internal_62b8c20()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x10]
        call public_6333e40
        mov ebp, dword ptr ss : [esp+0x38]
        xor ebx, ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x24], bl
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x18], ebx
        call public_6310170
        test al, al
        je public_62b8d9b
        lea esp, ss:[esp]
        public_62b8c60 : nop
        cmp dword ptr ss : [esp+0x14], ebx
        je public_62b8c7d
        lea ecx, ss:[esp+0x10]
        call public_6333e50
        test al, al
        jne public_62b8c7d
        cmp dword ptr ss : [esp+0x20], ebx
        jne public_62b8d9b
/*FIXUP public_62b8c7d : nop
        push offset public_63994e8 @0x62b8c7d*/
  FIXUP public_62b8c7d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        mov ecx, ebp
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62b8ca6
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        jmp public_62b8d8c
/*FIXUP public_62b8ca6 : nop
        push offset public_6399f18 @0x62b8ca6*/
  FIXUP public_62b8ca6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f18
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62b8cc5
        push ebx
        call public_63107c0
        mov dword ptr ss : [esp+0x14], eax
        jmp public_62b8d8c
/*FIXUP public_62b8cc5 : nop
        push offset public_639eca8 @0x62b8cc5*/
  FIXUP public_62b8cc5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639eca8
        call public_6310410
        test al, al
        jne public_62b8d80
/*FIXUP push offset public_6399f04 @0x62b8cd7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f04
        mov ecx, ebp
        call public_6310410
        test al, al
        jne public_62b8d80
/*FIXUP push offset public_639eca0 @0x62b8ceb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639eca0
        mov ecx, ebp
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62b8d48
        call public_6310b70
        mov esi, eax
        cmp esi, ebx
        jne public_62b8d12
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x24], bl
        jmp public_62b8d8c
        public_62b8d12 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x10
        jb public_62b8d2a
        mov eax, 0xF
        public_62b8d2a : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x24]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x24], bl
        mov dword ptr ss : [esp+0x20], eax
        jmp public_62b8d8c
/*FIXUP public_62b8d48 : nop
        push offset public_639ec94 @0x62b8d48*/
  FIXUP public_62b8d48 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ec94
        call public_6310410
        test al, al
        je public_62b8d8c
        mov ecx, ebp
        call public_6310b70
        push eax
        call public_630d3f0
        mov dword ptr ss : [esp+0x3C], eax
        lea eax, ss:[esp+0x3C]
        push eax
        call public_62f1250
        push eax
        call public_62f3cd0
        add esp, 0xC
        mov dword ptr ss : [esp+0x18], eax
        jmp public_62b8d8c
        public_62b8d80 : nop
        push ebx
        mov ecx, ebp
        call public_63107c0
        mov dword ptr ss : [esp+0x1C], eax
        public_62b8d8c : nop
        mov ecx, ebp
        call public_6310170
        test al, al
        jne public_62b8c60
        public_62b8d9b : nop
        lea ecx, ss:[esp+0x10]
        call public_6333e50
        test al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        jne public_62b8dd1
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        call public_62b8ab0
        add esp, 0x14
        add esp, 0x24
        ret 
        public_62b8dd1 : nop
        or eax, 0xFFFFFFFF
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x62b8c20)
    }
}

#undef public_62b8c60
#undef public_62b8c7d
#undef public_62b8ca6
#undef public_62b8cc5
#undef public_62b8d12
#undef public_62b8d2a
#undef public_62b8d48
#undef public_62b8d80
#undef public_62b8d8c
#undef public_62b8d9b
#undef public_62b8dd1
