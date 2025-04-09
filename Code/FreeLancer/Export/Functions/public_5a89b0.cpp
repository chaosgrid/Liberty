#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_424f30);
CLANG_FORWARD_PROC_SYMBOL(public_425080);
CLANG_FORWARD_PROC_SYMBOL(public_425140);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_473ad0);
CLANG_FORWARD_PROC_SYMBOL(public_473b60);
CLANG_FORWARD_PROC_SYMBOL(public_473be0);
CLANG_FORWARD_PROC_SYMBOL(public_474520);
CLANG_FORWARD_PROC_SYMBOL(public_474590);
CLANG_FORWARD_PROC_SYMBOL(public_564b10);
CLANG_FORWARD_PROC_SYMBOL(public_564b20);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_59e080);
CLANG_FORWARD_PROC_SYMBOL(public_59e300);
CLANG_FORWARD_PROC_SYMBOL(public_5a8260);
CLANG_FORWARD_PROC_SYMBOL(public_5a89b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b0b60);

#define public_5a89ea _public_5a89ea
#define public_5a89f2 _public_5a89f2
#define public_5a8a2c _public_5a8a2c
#define public_5a8a39 _public_5a8a39
#define public_5a8a47 _public_5a8a47
#define public_5a8a56 _public_5a8a56
#define public_5a8aa0 _public_5a8aa0
#define public_5a8b2c _public_5a8b2c
#define public_5a8b37 _public_5a8b37
#define public_5a8b3e _public_5a8b3e
#define public_5a8b40 _public_5a8b40
#define public_5a8b45 _public_5a8b45
#define public_5a8b4e _public_5a8b4e
#define public_5a8b50 _public_5a8b50
#define public_5a8b59 _public_5a8b59
#define public_5a8b7e _public_5a8b7e
#define public_5a8b92 _public_5a8b92
#define public_5a8bc5 _public_5a8bc5

PROC_DECLARE(0x5a89b0, internal_5a89b0, public_5a89b0);
extern "C" NAKED register_t __cdecl internal_5a89b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x10
        push esi
        push edi
        mov byte ptr ds : [public_67ea54], 1
        mov edi, 1
        mov dword ptr ds : [public_67ea50], 0
        call dword ptr ds : [public_5c6c9c]
        fstp dword ptr ss : [esp+8]
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5a89ea
        call public_474520
        public_5a89ea : nop
        mov esi, dword ptr ss : [ebp+8]
        cmp byte ptr ds : [esi], 0
        jne public_5a8a47
        public_5a89f2 : nop
        mov al, byte ptr ds : [public_67ecbe]
        test al, al
        jne public_5a8a47
        mov eax, dword ptr ds : [public_67ea50]
        test eax, eax
        jne public_5a8a47
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_5a8a47
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_5a8a2c
        call dword ptr ds : [public_5c6c9c]
        fsub dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x10]
        jmp public_5a8a39
        public_5a8a2c : nop
        call dword ptr ds : [public_5c6c9c]
        fsub dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0xC]
        public_5a8a39 : nop
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_5a8a47
        cmp byte ptr ds : [esi], 0
        je public_5a89f2
        public_5a8a47 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5a8a56
        call public_474590
        public_5a8a56 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5a8b45
        cmp byte ptr ds : [esi], 0
        jne public_5a8b45
        mov al, byte ptr ds : [public_67ecbe]
        test al, al
        jne public_5a8b4e
        mov eax, dword ptr ds : [public_67ea50]
        test eax, eax
        jne public_5a8b59
        push 0x736
        call public_473ad0
        mov al, byte ptr ds : [esi]
        add esp, 4
        test al, al
        jne public_5a8b40
        mov edi, edi
        public_5a8aa0 : nop
        mov al, byte ptr ds : [public_67ecbe]
        test al, al
        jne public_5a8b40
        mov eax, dword ptr ds : [public_67ea50]
        test eax, eax
        jne public_5a8b40
        call public_473be0
        test al, al
        je public_5a8b37
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_5b0b60
        add esp, 4
        test al, al
        je public_5a8b37
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_5a8b3e
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x2C]
        call dword ptr ds : [public_5c6c9c]
        fsub dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x10]
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_5a8b3e
        call public_42d680
        fstp qword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        call public_59e080
        add esp, 8
        call public_424f30
        test al, al
        je public_5a8b2c
        call public_59e300
        call public_425080
        call public_425140
        public_5a8b2c : nop
        cmp byte ptr ds : [esi], 0
        je public_5a8aa0
        jmp public_5a8b40
        public_5a8b37 : nop
        mov edi, 2
        jmp public_5a8b40
        public_5a8b3e : nop
        xor edi, edi
        public_5a8b40 : nop
        call public_473b60
        public_5a8b45 : nop
        mov al, byte ptr ds : [public_67ecbe]
        test al, al
        je public_5a8b50
        public_5a8b4e : nop
        xor edi, edi
        public_5a8b50 : nop
        mov eax, dword ptr ds : [public_67ea50]
        test eax, eax
        je public_5a8b92
        public_5a8b59 : nop
        cmp eax, 0x80158410
        je public_5a8b7e
        xor edx, edx
        cmp eax, 0x80158610
        setne dl
        mov byte ptr ds : [public_67ea54], 0
        add edx, 4
        mov edi, edx
        mov eax, edi
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_5a8b7e : nop
        mov edi, 6
        mov byte ptr ds : [public_67ea54], 0
        mov eax, edi
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_5a8b92 : nop
        cmp edi, 2
        jne public_5a8bc5
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5a8bc5
        call public_564b20
        test al, al
        jne public_5a8bc5
        call public_5a8260
        push 3
        call public_564b10
        push 0
        push 0xC5
        call public_5763b0
        add esp, 0xC
        public_5a8bc5 : nop
        mov eax, edi
        pop edi
        mov byte ptr ds : [public_67ea54], 0
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x5a89b0)
    }
}

#undef public_5a89ea
#undef public_5a89f2
#undef public_5a8a2c
#undef public_5a8a39
#undef public_5a8a47
#undef public_5a8a56
#undef public_5a8aa0
#undef public_5a8b2c
#undef public_5a8b37
#undef public_5a8b3e
#undef public_5a8b40
#undef public_5a8b45
#undef public_5a8b4e
#undef public_5a8b50
#undef public_5a8b59
#undef public_5a8b7e
#undef public_5a8b92
#undef public_5a8bc5
