#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4435e0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9721);

#define public_443635 _public_443635
#define public_443643 _public_443643
#define public_443656 _public_443656
#define public_44368d _public_44368d
#define public_44369a _public_44369a
#define public_4436ae _public_4436ae
#define public_4436ca _public_4436ca
#define public_4436de _public_4436de
#define public_4436fc _public_4436fc
#define public_44371d _public_44371d
#define public_443726 _public_443726

PROC_DECLARE(0x4435e0, internal_4435e0, public_4435e0);
extern "C" NAKED register_t __cdecl internal_4435e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9721 @0x4435e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9721
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        xor ecx, ecx
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_443726
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx]
        mov ebx, eax
        cmp esi, ebx
        jae public_443635
        mov ebx, esi
        public_443635 : nop
        cmp ebp, edi
        jne public_44369a
        cmp ebx, ecx
        jbe public_443643
        call dword ptr ds : [public_5c7064]
        public_443643 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_443656
        mov esi, eax
        public_443656 : nop
        test esi, esi
        jbe public_44368d
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_44368d
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_44368d : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        jmp public_44371d
        public_44369a : nop
        cmp ebx, ecx
        jbe public_4436de
        cmp ebx, eax
        jne public_4436de
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_4436ae
        mov eax, dword ptr ds : [public_5c7078]
        public_4436ae : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4436de
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_4436ca
        mov eax, dword ptr ds : [public_5c7078]
        public_4436ca : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_44371d
        public_4436de : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_44371d
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_5c7078]
        je public_4436fc
        mov esi, edi
        public_4436fc : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_44371d : nop
        mov edx, dword ptr ds : [edi+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], edx
        pop ebx
        public_443726 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4435e0)
    }
}

#undef public_443635
#undef public_443643
#undef public_443656
#undef public_44368d
#undef public_44369a
#undef public_4436ae
#undef public_4436ca
#undef public_4436de
#undef public_4436fc
#undef public_44371d
#undef public_443726
