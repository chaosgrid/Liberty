#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fd070);
CLANG_FORWARD_PROC_SYMBOL(public_66fd490);
CLANG_FORWARD_PROC_SYMBOL(public_66fd4b0);
CLANG_FORWARD_PROC_SYMBOL(public_66fd780);

#define public_66fdf54 _public_66fdf54
#define public_66fdf64 _public_66fdf64
#define public_66fdf67 _public_66fdf67
#define public_66fdf6b _public_66fdf6b
#define public_66fdf97 _public_66fdf97
#define public_66fdfd4 _public_66fdfd4
#define public_66fdfdd _public_66fdfdd
#define public_66fe008 _public_66fe008
#define public_66fe011 _public_66fe011
#define public_66fe044 _public_66fe044

PROC_DECLARE(0x66fdf20, internal_66fdf20, public_66fdf20);
extern "C" NAKED register_t __cdecl internal_66fdf20()
{
    __asm
    {
        sub esp, 0x28
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        cmp ebp, 0xFFFFFFFF
        je public_66fe044
        mov ecx, dword ptr ds : [public_67045fc]
        push esi
        push edi
        mov edi, dword ptr ds : [public_67045f8]
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], 0
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ecx
        mov al, 1
        je public_66fdf6b
        public_66fdf54 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov edi, esi
        je public_66fdf64
        mov esi, dword ptr ds : [esi]
        jmp public_66fdf67
        public_66fdf64 : nop
        mov esi, dword ptr ds : [esi+8]
        public_66fdf67 : nop
        cmp esi, ecx
        jne public_66fdf54
        public_66fdf6b : nop
        mov cl, byte ptr ds : [public_6704600]
        test cl, cl
        je public_66fdf97
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_67045f4
        mov byte ptr ss : [esp+0x50], 1
        call public_66fd4b0
        jmp public_66fe011
        public_66fdf97 : nop
        test al, al
        mov dword ptr ss : [esp+0xC], edi
        je public_66fdfdd
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_67045f4
        call public_66fd070
        cmp edi, dword ptr ds : [eax]
        jne public_66fdfd4
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        push edi
        push esi
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, offset public_67045f4
        mov byte ptr ss : [esp+0x50], 1
        call public_66fd4b0
        jmp public_66fe011
        public_66fdfd4 : nop
        lea ecx, ss:[esp+0xC]
        call public_66fd780
        public_66fdfdd : nop
        mov ecx, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [ecx+0xC], ebp
        lea edx, ss:[esp+0x3C]
        push edx
        jge public_66fe008
        lea eax, ss:[esp+0x28]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_67045f4
        mov byte ptr ss : [esp+0x50], 1
        call public_66fd4b0
        jmp public_66fe011
        public_66fe008 : nop
        mov byte ptr ss : [esp+0x40], 0
        lea eax, ss:[esp+0x10]
        public_66fe011 : nop
        lea ecx, ss:[esp+0x20]
        push eax
        call public_66fd490
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x34]
        call public_66fd490
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0x10], eax
        xor eax, eax
        pop ebp
        add esp, 0x28
        ret 0xC
        public_66fe044 : nop
        or eax, 0xFFFFFFFF
        pop ebp
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x66fdf20)
    }
}

#undef public_66fdf54
#undef public_66fdf64
#undef public_66fdf67
#undef public_66fdf6b
#undef public_66fdf97
#undef public_66fdfd4
#undef public_66fdfdd
#undef public_66fe008
#undef public_66fe011
#undef public_66fe044
