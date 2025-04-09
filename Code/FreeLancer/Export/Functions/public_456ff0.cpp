#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428ba0);
CLANG_FORWARD_PROC_SYMBOL(public_428bc0);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_456ff0);

#define public_45703d _public_45703d
#define public_457068 _public_457068
#define public_457095 _public_457095

PROC_DECLARE(0x456ff0, internal_456ff0, public_456ff0);
extern "C" NAKED register_t __cdecl internal_456ff0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, ecx
        lea ebx, ds:[esi+0x6C]
        push edi
        push ebx
        call dword ptr ds : [public_5c60cc]
        mov al, byte ptr ss : [esp+0x20]
        mov ebp, dword ptr ds : [public_5c6d24]
        mov byte ptr ds : [esi+0x74], al
        mov ecx, dword ptr ds : [public_610ff8]
        push ecx
        push edi
        call ebp
        add esp, 0x10
        test eax, eax
        jne public_45703d
        mov byte ptr ds : [esi+0x76], 1
        add esi, 0x80
        push esi
        call public_428bc0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_45703d : nop
        mov edx, dword ptr ds : [public_610ffc]
        push edx
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_457068
        mov byte ptr ds : [esi+0x77], 1
        add esi, 0x80
        push esi
        call public_428ba0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_457068 : nop
        mov al, byte ptr ds : [esi+0x74]
        test al, al
        jne public_457095
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_457095
        cmp byte ptr ds : [eax], 0
        je public_457095
        push eax
        call dword ptr ds : [public_5c6020]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        call public_42ae40
        add esp, 8
        mov dword ptr ds : [esi+0x7C], eax
        public_457095 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x456ff0)
    }
}

#undef public_45703d
#undef public_457068
#undef public_457095
