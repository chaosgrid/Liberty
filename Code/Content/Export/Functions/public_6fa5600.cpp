#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7730);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5580);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5600);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5840);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa5642 _public_6fa5642
#define public_6fa565a _public_6fa565a
#define public_6fa5665 _public_6fa5665
#define public_6fa567b _public_6fa567b
#define public_6fa5688 _public_6fa5688
#define public_6fa569a _public_6fa569a
#define public_6fa56a5 _public_6fa56a5
#define public_6fa56bb _public_6fa56bb
#define public_6fa56d3 _public_6fa56d3
#define public_6fa56db _public_6fa56db
#define public_6fa56f3 _public_6fa56f3
#define public_6fa56fb _public_6fa56fb
#define public_6fa5711 _public_6fa5711
#define public_6fa5721 _public_6fa5721
#define public_6fa5737 _public_6fa5737
#define public_6fa5743 _public_6fa5743
#define public_6fa5755 _public_6fa5755
#define public_6fa5770 _public_6fa5770
#define public_6fa5788 _public_6fa5788
#define public_6fa5793 _public_6fa5793
#define public_6fa57a9 _public_6fa57a9
#define public_6fa57c8 _public_6fa57c8
#define public_6fa57dc _public_6fa57dc
#define public_6fa57f2 _public_6fa57f2
#define public_6fa57fa _public_6fa57fa
#define public_6fa582e _public_6fa582e

PROC_DECLARE(0x6fa5600, internal_6fa5600, public_6fa5600);
extern "C" NAKED register_t __cdecl internal_6fa5600()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        push ebx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        push ebp
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [eax+0xC]
        push esi
        mov dword ptr ds : [ecx+0xC], edx
        mov edx, dword ptr ds : [eax+0x10]
        lea esi, ds:[eax+0x14]
        lea ebx, ds:[ecx+0x14]
        cmp ebx, esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [ecx+0x10], edx
        je public_6fa582e
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        jne public_6fa5642
        xor ebp, ebp
        jmp public_6fa565a
        public_6fa5642 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        public_6fa565a : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6fa5665
        xor edx, edx
        jmp public_6fa567b
        public_6fa5665 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa567b : nop
        cmp ebp, edx
        ja public_6fa56d3
        mov ebp, dword ptr ds : [esi+8]
        cmp edi, ebp
        mov ebx, ecx
        je public_6fa569a
        public_6fa5688 : nop
        push edi
        mov ecx, ebx
        call public_6fa5580
        add edi, 0x48
        add ebx, 0x48
        cmp edi, ebp
        jne public_6fa5688
        public_6fa569a : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6fa56a5
        xor edx, edx
        jmp public_6fa56bb
        public_6fa56a5 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, 0x38E38E39
        imul esi
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6fa56bb : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x18]
        pop edi
        pop esi
        lea edx, ds:[edx+edx*8]
        lea edx, ds:[ecx+edx*8]
        pop ebp
        mov dword ptr ds : [eax+0x1C], edx
        pop ebx
        pop ecx
        ret 4
        public_6fa56d3 : nop
        test edi, edi
        jne public_6fa56db
        xor ebp, ebp
        jmp public_6fa56f3
        public_6fa56db : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, edi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        public_6fa56f3 : nop
        test ecx, ecx
        jne public_6fa56fb
        xor edx, edx
        jmp public_6fa5711
        public_6fa56fb : nop
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5711 : nop
        cmp ebp, edx
        ja public_6fa57c8
        test ecx, ecx
        jne public_6fa5721
        xor edx, edx
        jmp public_6fa5737
        public_6fa5721 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5737 : nop
        lea edx, ds:[edx+edx*8]
        lea ebx, ds:[edi+edx*8]
        cmp edi, ebx
        mov ebp, ecx
        je public_6fa5755
        public_6fa5743 : nop
        push edi
        mov ecx, ebp
        call public_6fa5580
        add edi, 0x48
        add ebp, 0x48
        cmp edi, ebx
        jne public_6fa5743
        public_6fa5755 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [ecx+0x1C]
        add ecx, 0x14
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], eax
        mov edi, ebx
        je public_6fa5788
        lea esp, ss:[esp]
        public_6fa5770 : nop
        push edi
        push ebp
        call public_6ea7730
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 0x48
        add esp, 8
        add ebp, 0x48
        cmp edi, eax
        jne public_6fa5770
        public_6fa5788 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6fa5793
        xor edx, edx
        jmp public_6fa57a9
        public_6fa5793 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, 0x38E38E39
        imul esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa57a9 : nop
        lea ecx, ds:[edx+edx*8]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0x14]
        mov edx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        lea ecx, ds:[edx+ecx*8]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+4]
        pop ebx
        pop ecx
        ret 4
        public_6fa57c8 : nop
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        jne public_6fa57dc
        xor edx, edx
        jmp public_6fa57f2
        public_6fa57dc : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa57f2 : nop
        test edx, edx
        mov eax, edx
        jge public_6fa57fa
        xor eax, eax
        public_6fa57fa : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 3
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        push eax
        push ecx
        push esi
        mov ecx, ebx
        call public_6fa5840
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ss : [esp+8]
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6fa582e : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6fa5600)
    }
}

#undef public_6fa5642
#undef public_6fa565a
#undef public_6fa5665
#undef public_6fa567b
#undef public_6fa5688
#undef public_6fa569a
#undef public_6fa56a5
#undef public_6fa56bb
#undef public_6fa56d3
#undef public_6fa56db
#undef public_6fa56f3
#undef public_6fa56fb
#undef public_6fa5711
#undef public_6fa5721
#undef public_6fa5737
#undef public_6fa5743
#undef public_6fa5755
#undef public_6fa5770
#undef public_6fa5788
#undef public_6fa5793
#undef public_6fa57a9
#undef public_6fa57c8
#undef public_6fa57dc
#undef public_6fa57f2
#undef public_6fa57fa
#undef public_6fa582e
