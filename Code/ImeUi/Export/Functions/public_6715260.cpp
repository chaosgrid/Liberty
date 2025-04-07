#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6715260);
CLANG_FORWARD_PROC_SYMBOL(public_67169b8);

#define public_671528f _public_671528f
#define public_67152b9 _public_67152b9
#define public_67152d1 _public_67152d1
#define public_67152dc _public_67152dc
#define public_67152e1 _public_67152e1

PROC_DECLARE(0x6715260, internal_6715260, public_6715260);
extern "C" NAKED register_t __cdecl internal_6715260()
{
    __asm
    {
        mov al, byte ptr ds : [public_671cfba]
        push ebx
        test al, al
        push edi
        je public_67152dc
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_67152dc
        cmp dword ptr ds : [eax+8], 0xE5
        jne public_67152dc
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, 0x100
        je public_671528f
        cmp ecx, 0x104
        jne public_67152dc
        public_671528f : nop
        mov eax, dword ptr ds : [eax]
        push esi
        push eax
        call public_67169b8
        mov esi, dword ptr ds : [public_6717110]
        push 0x11
        mov edi, eax
        call esi
        mov bx, ax
        push 0x10
        shr ebx, 0xF
        and bl, 1
        call esi
        shr eax, 0xF
        and al, 1
        xor ecx, ecx
        pop esi
        public_67152b9 : nop
        cmp byte ptr ds : [ecx+public_67190c8], bl
        jne public_67152d1
        cmp byte ptr ds : [ecx+public_67190c9], al
        jne public_67152d1
        cmp dword ptr ds : [ecx+public_67190cc], edi
        je public_67152e1
        public_67152d1 : nop
        add ecx, 8
        cmp ecx, 0xA0
        jb public_67152b9
        public_67152dc : nop
        pop edi
        xor al, al
        pop ebx
        ret 
        public_67152e1 : nop
        pop edi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6715260)
    }
}

#undef public_671528f
#undef public_67152b9
#undef public_67152d1
#undef public_67152dc
#undef public_67152e1
