#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67154c0);
CLANG_FORWARD_PROC_SYMBOL(public_6715da0);
CLANG_FORWARD_PROC_SYMBOL(public_671697c);
CLANG_FORWARD_PROC_SYMBOL(public_6716982);
CLANG_FORWARD_PROC_SYMBOL(public_6716988);
CLANG_FORWARD_PROC_SYMBOL(public_671698e);
CLANG_FORWARD_PROC_SYMBOL(public_67169c4);

#define public_67154f9 _public_67154f9
#define public_6715500 _public_6715500
#define public_6715551 _public_6715551
#define public_671556e _public_671556e
#define public_6715578 _public_6715578
#define public_6715589 _public_6715589

PROC_DECLARE(0x67154c0, internal_67154c0, public_67154c0);
extern "C" NAKED register_t __cdecl internal_67154c0()
{
    __asm
    {
        sub esp, 8
        call public_6715da0
        mov eax, dword ptr ds : [public_671cfc4]
        push eax
        call public_671697c
        mov ecx, dword ptr ds : [public_671cfc4]
        test eax, eax
        setne al
        and ecx, 0x3FF
        mov byte ptr ds : [public_671b7b9], al
        cmp ecx, 4
        jne public_67154f9
        test al, al
        mov byte ptr ds : [public_671b7b8], 1
        jne public_6715500
        public_67154f9 : nop
        mov byte ptr ds : [public_671b7b8], 0
        public_6715500 : nop
        mov edx, dword ptr ds : [public_671cf98]
        push esi
        push edx
        call public_6716988
        mov esi, eax
        test esi, esi
        je public_6715589
        mov al, byte ptr ds : [public_671b7b8]
        test al, al
        je public_6715551
        lea eax, ss:[esp+8]
        lea ecx, ss:[esp+4]
        push eax
        push ecx
        push esi
        call public_671698e
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_671cf98]
        and dl, 1
        push esi
        neg dl
        sbb edx, edx
        push eax
        add edx, 2
        mov dword ptr ds : [public_671cfbc], edx
        call public_6716982
        pop esi
        add esp, 8
        ret 
        public_6715551 : nop
        mov al, byte ptr ds : [public_671b7b9]
        test al, al
        je public_671556e
        push esi
        call public_67169c4
        test eax, eax
        mov dword ptr ds : [public_671cfbc], 1
        jne public_6715578
        public_671556e : nop
        mov dword ptr ds : [public_671cfbc], 0
        public_6715578 : nop
        mov eax, dword ptr ds : [public_671cf98]
        push esi
        push eax
        call public_6716982
        pop esi
        add esp, 8
        ret 
        public_6715589 : nop
        mov dword ptr ds : [public_671cfbc], 0
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x67154c0)
    }
}

#undef public_67154f9
#undef public_6715500
#undef public_6715551
#undef public_671556e
#undef public_6715578
#undef public_6715589
