#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422820);

#define public_422862 _public_422862
#define public_42287b _public_42287b
#define public_42287d _public_42287d
#define public_4228ce _public_4228ce
#define public_4228d8 _public_4228d8

PROC_DECLARE(0x422820, internal_422820, public_422820);
extern "C" NAKED register_t __cdecl internal_422820()
{
    __asm
    {
        mov al, byte ptr ds : [public_610844]
        sub esp, 0x10
        test al, al
        je public_4228d8
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [public_66490c]
        mov dword ptr ss : [esp+8], edx
        mov edx, 1
        cmp eax, edx
        mov dword ptr ss : [esp+4], ecx
        setne al
        xor ecx, ecx
        push esi
        public_422862 : nop
        test al, al
        jne public_42287b
        fld dword ptr ds : [ecx+public_664910]
        fcomp dword ptr ss : [esp+ecx+4]
        fnstsw ax
        test ah, 0x44
        jp public_42287b
        xor al, al
        jmp public_42287d
        public_42287b : nop
        mov al, dl
        public_42287d : nop
        mov esi, dword ptr ss : [esp+ecx+4]
        mov dword ptr ds : [ecx+public_664910], esi
        add ecx, 4
        cmp ecx, 0x10
        jl public_422862
        test al, al
        pop esi
        je public_4228ce
        mov eax, dword ptr ds : [public_664990]
        mov ecx, dword ptr ds : [public_5c6de0]
        inc eax
        mov dword ptr ds : [public_664990], eax
        mov dword ptr ds : [public_66490c], edx
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [edx+0x94]
        add esp, 0x10
        ret 
        public_4228ce : nop
        inc dword ptr ds : [public_66498c]
        add esp, 0x10
        ret 
        public_4228d8 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x94]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x422820)
    }
}

#undef public_422862
#undef public_42287b
#undef public_42287d
#undef public_4228ce
#undef public_4228d8
