#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0540);

#define public_6ecd400 _public_6ecd400
#define public_6ecd423 _public_6ecd423
#define public_6ecd436 _public_6ecd436
#define public_6ecd447 _public_6ecd447
#define public_6ecd44d _public_6ecd44d
#define public_6ecd457 _public_6ecd457
#define public_6ecd460 _public_6ecd460

PROC_DECLARE(0x6ecd3e0, internal_6ecd3e0, public_6ecd3e0);
extern "C" NAKED register_t __cdecl internal_6ecd3e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6ecd44d
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6ecd400 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, 0
        je public_6ecd436
        dec eax
        jne public_6ecd447
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        push ecx
        call public_6ed0540
        add esp, 8
        test eax, eax
        je public_6ecd447
        mov esi, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ss : [esp+0x24]
        public_6ecd423 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6ecd423
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x14
        public_6ecd436 : nop
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        call public_6ed0540
        add esp, 8
        test eax, eax
        jne public_6ecd457
        public_6ecd447 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6ecd400
        public_6ecd44d : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x14
        public_6ecd457 : nop
        mov esi, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, edi
        public_6ecd460 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6ecd460
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x6ecd3e0)
    }
}

#undef public_6ecd400
#undef public_6ecd423
#undef public_6ecd436
#undef public_6ecd447
#undef public_6ecd44d
#undef public_6ecd457
#undef public_6ecd460
