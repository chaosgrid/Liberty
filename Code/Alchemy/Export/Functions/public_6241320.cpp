#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246188);

#define public_624136d _public_624136d
#define public_6241373 _public_6241373
#define public_6241389 _public_6241389
#define public_62413a3 _public_62413a3
#define public_624144a _public_624144a

PROC_DECLARE(0x6241320, internal_6241320, public_6241320);
extern "C" NAKED register_t __cdecl internal_6241320()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edi+0xC]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x41
        jnp public_624144a
        mov ecx, dword ptr ds : [edi+0x14]
        lea eax, ds:[ecx+1]
        cmp eax, 1
        je public_624144a
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+ecx*8]
        fnstsw ax
        and eax, 0x100
        jne public_624136d
        mov ecx, dword ptr ds : [esi+ecx*8+4]
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        pop edi
        pop esi
        ret 0xC
        public_624136d : nop
        xor edx, edx
        test ecx, ecx
        jle public_6241389
        public_6241373 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 5
        jnp public_6241389
        inc edx
        add esi, 8
        cmp edx, ecx
        jl public_6241373
        public_6241389 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62413a3
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push esi
        mov ecx, dword ptr ds : [esi]
        call dword ptr ds : [ecx+0x20]
        pop edi
        pop esi
        ret 0xC
        public_62413a3 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x20]
        mov esi, dword ptr ds : [esi+4]
        push edi
        push esi
        mov dword ptr ss : [esp+0x20], eax
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x20]
        mov ebx, eax
        xor ecx, ecx
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        xor edx, edx
        fmul dword ptr ds : [public_624babc]
        mov dl, byte ptr ss : [esp+0x1A]
        mov esi, eax
        mov cl, ah
        mov dword ptr ss : [esp+0x14], ebx
        and esi, 0xFF
        mov ebp, ecx
        mov dword ptr ss : [esp+0x18], edx
        call public_6246188
        xor ecx, ecx
        mov edi, eax
        mov cl, byte ptr ss : [esp+0x16]
        mov eax, dword ptr ss : [esp+0x18]
        xor edx, edx
        sub ecx, eax
        mov dl, bh
        imul ecx, edi
        sub edx, ebp
        and ebx, 0xFF
        imul edx, edi
        sub ebx, esi
        imul ebx, edi
        sar ecx, 8
        add ecx, eax
        sar edx, 8
        shl ecx, 0x10
        add edx, ebp
        mov eax, ecx
        shl edx, 8
        sar ebx, 8
        and eax, 0xFF0000
        and edx, 0xFF00
        add ebx, esi
        or eax, edx
        and ebx, 0xFF
        pop ebp
        or eax, ebx
        pop ebx
        pop edi
        pop esi
        ret 0xC
        public_624144a : nop
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x20]
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6241320)
    }
}

#undef public_624136d
#undef public_6241373
#undef public_6241389
#undef public_62413a3
#undef public_624144a
