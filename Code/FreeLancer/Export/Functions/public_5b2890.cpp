#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_473cb0);
CLANG_FORWARD_PROC_SYMBOL(public_564b10);
CLANG_FORWARD_PROC_SYMBOL(public_564b20);
CLANG_FORWARD_PROC_SYMBOL(public_575430);
CLANG_FORWARD_PROC_SYMBOL(public_59e080);
CLANG_FORWARD_PROC_SYMBOL(public_5a8260);
CLANG_FORWARD_PROC_SYMBOL(public_5b2890);
CLANG_FORWARD_PROC_SYMBOL(public_5b2a30);

#define public_5b28b6 _public_5b28b6
#define public_5b28cf _public_5b28cf
#define public_5b2905 _public_5b2905
#define public_5b2932 _public_5b2932
#define public_5b2936 _public_5b2936
#define public_5b2970 _public_5b2970
#define public_5b29a1 _public_5b29a1
#define public_5b29a7 _public_5b29a7
#define public_5b29b3 _public_5b29b3
#define public_5b29c8 _public_5b29c8
#define public_5b29de _public_5b29de
#define public_5b29ec _public_5b29ec
#define public_5b29ee _public_5b29ee
#define public_5b29f4 _public_5b29f4
#define public_5b2a16 _public_5b2a16

PROC_DECLARE(0x5b2890, internal_5b2890, public_5b2890);
extern "C" NAKED register_t __cdecl internal_5b2890()
{
    __asm
    {
        push ecx
        push ebp
        push esi
        xor ebp, ebp
        push edi
        mov dword ptr ss : [esp+0xC], ebp
        call public_42d740
        test al, al
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x14]
        jne public_5b28b6
        push esi
        push edi
        call dword ptr ds : [public_5c6ce0]
        add esp, 8
        public_5b28b6 : nop
        mov eax, dword ptr ds : [public_67ecd0]
        mov ecx, dword ptr ds : [public_67ecb0]
        push ebx
        xor bl, bl
        cmp ecx, eax
        je public_5b28cf
        mov bl, 1
        mov dword ptr ds : [public_67ecb0], eax
        public_5b28cf : nop
        mov al, byte ptr ds : [public_67ecbd]
        test al, al
        jne public_5b2936
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5b2932
        mov al, byte ptr ds : [public_67ecbe]
        test al, al
        je public_5b2932
        mov al, byte ptr ds : [public_67ecbf]
        test al, al
        je public_5b2905
        push 0
        push 0
        push 0x737
        call public_473cb0
        add esp, 0xC
        public_5b2905 : nop
        mov byte ptr ds : [public_67ecbe], 0
        mov byte ptr ds : [public_67ecbf], 0
        call public_5a8260
        call public_564b20
        test al, al
        jne public_5b2932
        push 3
        call public_564b10
        add esp, 4
        mov byte ptr ds : [public_67ecbd], 1
        public_5b2932 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_5b2936 : nop
        push esi
        push edi
        call public_59e080
        mov eax, dword ptr ds : [public_67ecd0]
        add esp, 8
        test eax, eax
        je public_5b2970
        call public_42d740
        test al, al
        jne public_5b2970
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        fld qword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x30]
        public_5b2970 : nop
        test bl, bl
        pop ebx
        je public_5b29ee
        mov eax, dword ptr ds : [public_67ecd0]
        test eax, eax
        jne public_5b29ee
        call public_575430
        mov ecx, dword ptr ds : [public_67ecac]
        cmp ecx, eax
        je public_5b29f4
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5b29a1
        push 3
        call public_564b10
        add esp, 4
        public_5b29a1 : nop
        mov ecx, dword ptr ds : [public_67ecac]
        public_5b29a7 : nop
        mov ebp, 6
        mov byte ptr ds : [public_67ecbd], 0
        public_5b29b3 : nop
        mov eax, dword ptr ds : [public_67ecc4]
        test eax, eax
        je public_5b29c8
        mov ebp, eax
        mov dword ptr ds : [public_67ecc4], 0
        public_5b29c8 : nop
        test ebp, ebp
        je public_5b29de
        push ecx
        push ebp
        call public_5b2a30
        mov ecx, eax
        add esp, 8
        mov dword ptr ds : [public_67ecac], ecx
        public_5b29de : nop
        test ecx, ecx
        pop edi
        pop esi
        pop ebp
        jne public_5b29ec
        push ecx
        call dword ptr ds : [public_5c727c]
        public_5b29ec : nop
        pop ecx
        ret 
        public_5b29ee : nop
        mov ecx, dword ptr ds : [public_67ecac]
        public_5b29f4 : nop
        test ecx, ecx
        je public_5b2a16
        mov al, byte ptr ds : [public_67ecbd]
        test al, al
        jne public_5b29a7
        fld qword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ds : [public_67ecac]
        mov ebp, eax
        public_5b2a16 : nop
        mov al, byte ptr ds : [public_67ecbd]
        test al, al
        je public_5b29b3
        jmp public_5b29a7
        UNREACHABLE_TRAP(0x5b2890)
    }
}

#undef public_5b28b6
#undef public_5b28cf
#undef public_5b2905
#undef public_5b2932
#undef public_5b2936
#undef public_5b2970
#undef public_5b29a1
#undef public_5b29a7
#undef public_5b29b3
#undef public_5b29c8
#undef public_5b29de
#undef public_5b29ec
#undef public_5b29ee
#undef public_5b29f4
#undef public_5b2a16
