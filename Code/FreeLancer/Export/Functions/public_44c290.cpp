#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44c290);
CLANG_FORWARD_PROC_SYMBOL(public_556cd0);
CLANG_FORWARD_PROC_SYMBOL(public_556ce0);
CLANG_FORWARD_PROC_SYMBOL(public_556e00);
CLANG_FORWARD_PROC_SYMBOL(public_556f10);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_44c2bc _public_44c2bc
#define public_44c2cb _public_44c2cb
#define public_44c2d1 _public_44c2d1
#define public_44c2f8 _public_44c2f8
#define public_44c304 _public_44c304
#define public_44c31d _public_44c31d
#define public_44c385 _public_44c385
#define public_44c3f8 _public_44c3f8

PROC_DECLARE(0x44c290, internal_44c290, public_44c290);
extern "C" NAKED register_t __cdecl internal_44c290()
{
    __asm
    {
        sub esp, 0x58
        push ebx
        push ebp
        mov ebp, ecx
        mov byte ptr ss : [ebp+0x1338], 0
        mov byte ptr ds : [public_66d359], 0
        mov ebx, dword ptr ss : [ebp+0x40]
        mov ecx, dword ptr ds : [ebx+0x138]
        push esi
        push edi
        xor edi, edi
        cmp ecx, edi
        jne public_44c2bc
        mov dword ptr ss : [esp+0x10], edi
        jmp public_44c2cb
        public_44c2bc : nop
        mov eax, dword ptr ds : [ebx+0x13C]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x10], eax
        public_44c2cb : nop
        cmp dword ptr ss : [esp+0x10], edi
        jle public_44c2f8
        public_44c2d1 : nop
        mov eax, dword ptr ds : [ebx+0x138]
        mov esi, dword ptr ds : [eax+edi*4]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x6C]
        push ecx
        push edx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_44c304
        mov eax, dword ptr ss : [esp+0x10]
        inc edi
        cmp edi, eax
        jl public_44c2d1
        public_44c2f8 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x58
        ret 4
        public_44c304 : nop
        mov eax, dword ptr ds : [public_668ac0]
        test eax, eax
        lea edi, ss:[ebp+0x1348]
        jne public_44c31d
        call public_5b73e0
        mov dword ptr ds : [public_668ac0], eax
        public_44c31d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x10]
        push edx
        push edi
        push eax
        call dword ptr ds : [ecx+0x50]
        lea eax, ds:[esi+4]
        mov edx, dword ptr ds : [eax]
        lea ebx, ss:[ebp+0x1358]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [ebp+0x1364], ecx
        mov edx, dword ptr ds : [esi+0x38]
        mov dword ptr ss : [ebp+0x1368], edx
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [ebp+0x136C], eax
        mov eax, dword ptr ss : [ebp+0x500]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [public_668ac0]
        test eax, eax
        lea edi, ss:[ebp+0x1370]
        jne public_44c385
        call public_5b73e0
        mov dword ptr ds : [public_668ac0], eax
        public_44c385 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ss : [ebp+0x500]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x1380]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [ebp+0x500]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        fstp dword ptr ss : [ebp+0x138C]
        mov eax, dword ptr ss : [ebp+0x500]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x20]
        fstp dword ptr ss : [ebp+0x1390]
        mov eax, dword ptr ss : [ebp+0x500]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        fstp dword ptr ss : [ebp+0x1394]
        mov eax, dword ptr ds : [public_668ac0]
        test eax, eax
        jne public_44c3f8
        call public_5b73e0
        mov dword ptr ds : [public_668ac0], eax
        public_44c3f8 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x1348]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, 9
        lea esi, ss:[esp+0x14]
        lea edi, ss:[esp+0x38]
        rep movsd
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x5C], edx
        lea edx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ss : [ebp+0x500]
        push edx
        push eax
        mov dword ptr ss : [esp+0x6C], ecx
        call public_556cd0
        mov ecx, dword ptr ss : [ebp+0x1364]
        mov edx, dword ptr ss : [ebp+0x500]
        push ecx
        push edx
        call public_556ce0
        mov eax, dword ptr ss : [ebp+0x1368]
        mov ecx, dword ptr ss : [ebp+0x500]
        push eax
        push ecx
        call public_556e00
        mov edx, dword ptr ss : [ebp+0x136C]
        mov eax, dword ptr ss : [ebp+0x500]
        push edx
        push eax
        call public_556f10
        add esp, 0x20
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x58
        ret 4
        UNREACHABLE_TRAP(0x44c290)
    }
}

#undef public_44c2bc
#undef public_44c2cb
#undef public_44c2d1
#undef public_44c2f8
#undef public_44c304
#undef public_44c31d
#undef public_44c385
#undef public_44c3f8
