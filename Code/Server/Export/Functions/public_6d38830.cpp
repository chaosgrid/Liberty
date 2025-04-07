#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d389b0);

#define public_6d388a1 _public_6d388a1
#define public_6d388b9 _public_6d388b9
#define public_6d388c8 _public_6d388c8
#define public_6d38901 _public_6d38901
#define public_6d38905 _public_6d38905
#define public_6d38940 _public_6d38940
#define public_6d38948 _public_6d38948
#define public_6d3894c _public_6d3894c
#define public_6d38950 _public_6d38950
#define public_6d38955 _public_6d38955
#define public_6d3896e _public_6d3896e
#define public_6d38981 _public_6d38981
#define public_6d3898f _public_6d3898f
#define public_6d3899b _public_6d3899b

PROC_DECLARE(0x6d38830, internal_6d38830, public_6d38830);
extern "C" NAKED register_t __cdecl internal_6d38830()
{
    __asm
    {
        sub esp, 0x10
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x10]
        push edi
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], ebx
        mov esi, edx
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x10], edi
        je public_6d38950
        mov ecx, dword ptr ds : [ebx+8]
        lea eax, ss:[esp+0x28]
        push eax
        push ebp
        call public_6d389b0
        test al, al
        je public_6d38948
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, edx
        sub eax, esi
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_6d388c8
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        je public_6d388a1
        mov eax, dword ptr ds : [ebx]
        push edx
        push ebp
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0x10
        ret 8
        public_6d388a1 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d388b9
        cmp dword ptr ss : [ebp+8], edx
        jne public_6d388b9
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 8
        public_6d388b9 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d388c8 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0x10]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edi
        jae public_6d38950
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax+4]
        shl ecx, 5
        add eax, ecx
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        je public_6d38950
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, edx
        je public_6d38940
        jmp public_6d38905
        public_6d38901 : nop
        mov edx, dword ptr ss : [esp+0x28]
        public_6d38905 : nop
        cmp dword ptr ss : [ebp+0xC], edi
        je public_6d3894c
        mov bx, word ptr ds : [edi]
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push ebx
        mov ebp, eax
        call dword ptr ds : [public_6d64ba0]
        mov ebx, dword ptr ss : [esp+0x1C]
        add esp, 8
        cmp ax, bp
        mov ebp, dword ptr ss : [esp+0x24]
        jne public_6d38948
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 2
        add edi, 2
        cmp esi, eax
        jne public_6d38901
        public_6d38940 : nop
        mov edx, edi
        mov dword ptr ss : [esp+0x28], edx
        jmp public_6d388c8
        public_6d38948 : nop
        mov edx, dword ptr ss : [esp+0x28]
        public_6d3894c : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_6d38950 : nop
        cmp dword ptr ds : [ebx+0xC], edi
        ja public_6d3899b
        public_6d38955 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d38981
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebp
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        jne public_6d3898f
        mov edx, dword ptr ss : [esp+0x28]
        public_6d3896e : nop
        cmp dword ptr ds : [ebx+0xC], edi
        je public_6d3899b
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[edx+ecx*2]
        dec edi
        mov dword ptr ss : [esp+0x28], edx
        jmp public_6d38955
        public_6d38981 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d3898f
        cmp dword ptr ss : [ebp+8], edx
        jne public_6d3898f
        jmp public_6d3896e
        public_6d3898f : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d3899b : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d38830)
    }
}

#undef public_6d388a1
#undef public_6d388b9
#undef public_6d388c8
#undef public_6d38901
#undef public_6d38905
#undef public_6d38940
#undef public_6d38948
#undef public_6d3894c
#undef public_6d38950
#undef public_6d38955
#undef public_6d3896e
#undef public_6d38981
#undef public_6d3898f
#undef public_6d3899b
