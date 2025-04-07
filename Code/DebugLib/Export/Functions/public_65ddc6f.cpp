#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd66f);
CLANG_FORWARD_PROC_SYMBOL(public_65ddc6f);
CLANG_FORWARD_PROC_SYMBOL(public_65dece8);

#define public_65ddc95 _public_65ddc95
#define public_65ddca9 _public_65ddca9
#define public_65ddcae _public_65ddcae
#define public_65ddcf3 _public_65ddcf3
#define public_65ddcf8 _public_65ddcf8
#define public_65ddd0a _public_65ddd0a
#define public_65ddd27 _public_65ddd27
#define public_65ddd35 _public_65ddd35
#define public_65ddd46 _public_65ddd46

PROC_DECLARE(0x65ddc6f, internal_65ddc6f, public_65ddc6f);
extern "C" NAKED register_t __cdecl internal_65ddc6f()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xC]
        test al, 0x83
        je public_65ddd46
        test al, 0x40
        jne public_65ddd46
        test al, 2
        je public_65ddc95
        or al, 0x20
        mov dword ptr ds : [esi+0xC], eax
        jmp public_65ddd46
        public_65ddc95 : nop
        or al, 1
        test ax, 0x10C
        mov dword ptr ds : [esi+0xC], eax
        jne public_65ddca9
        push esi
        call public_65dd66f
        pop ecx
        jmp public_65ddcae
        public_65ddca9 : nop
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi], eax
        public_65ddcae : nop
        push dword ptr ds : [esi+0x18]
        push dword ptr ds : [esi+8]
        push dword ptr ds : [esi+0x10]
        call public_65dece8
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        test eax, eax
        je public_65ddd35
        cmp eax, 0xFFFFFFFF
        je public_65ddd35
        mov edx, dword ptr ds : [esi+0xC]
        test dl, 0x82
        jne public_65ddd0a
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        cmp ecx, 0xFFFFFFFF
        je public_65ddcf3
        mov edi, ecx
        sar edi, 5
        and ecx, 0x1F
        mov edi, dword ptr ds : [edi*4+public_65e7940]
        lea ecx, ds:[ecx+ecx*8]
        lea edi, ds:[edi+ecx*4]
        jmp public_65ddcf8
        public_65ddcf3 : nop
        mov edi, offset public_65e3510
        public_65ddcf8 : nop
        mov cl, byte ptr ds : [edi+4]
        pop edi
        and cl, 0x82
        cmp cl, 0x82
        jne public_65ddd0a
        or dh, 0x20
        mov dword ptr ds : [esi+0xC], edx
        public_65ddd0a : nop
        cmp dword ptr ds : [esi+0x18], 0x200
        jne public_65ddd27
        mov ecx, dword ptr ds : [esi+0xC]
        test cl, 8
        je public_65ddd27
        test ch, 4
        jne public_65ddd27
        mov dword ptr ds : [esi+0x18], 0x1000
        public_65ddd27 : nop
        mov ecx, dword ptr ds : [esi]
        dec eax
        mov dword ptr ds : [esi+4], eax
        movzx eax, byte ptr ds : [ecx]
        inc ecx
        mov dword ptr ds : [esi], ecx
        pop esi
        ret 
        public_65ddd35 : nop
        neg eax
        sbb eax, eax
        and eax, 0x10
        add eax, 0x10
        or dword ptr ds : [esi+0xC], eax
        and dword ptr ds : [esi+4], 0
        public_65ddd46 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65ddc6f)
    }
}

#undef public_65ddc95
#undef public_65ddca9
#undef public_65ddcae
#undef public_65ddcf3
#undef public_65ddcf8
#undef public_65ddd0a
#undef public_65ddd27
#undef public_65ddd35
#undef public_65ddd46
