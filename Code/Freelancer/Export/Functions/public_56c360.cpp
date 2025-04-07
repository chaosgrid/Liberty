#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_473cb0);
CLANG_FORWARD_PROC_SYMBOL(public_488a80);
CLANG_FORWARD_PROC_SYMBOL(public_488b70);
CLANG_FORWARD_PROC_SYMBOL(public_4890c0);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_56bd40);
CLANG_FORWARD_PROC_SYMBOL(public_56cb40);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);
CLANG_FORWARD_PROC_SYMBOL(public_595d90);
CLANG_FORWARD_PROC_SYMBOL(public_595dd0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1f20);
CLANG_FORWARD_PROC_SYMBOL(public_5aa680);
CLANG_FORWARD_PROC_SYMBOL(public_5aa8f0);
CLANG_FORWARD_PROC_SYMBOL(public_5aade0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_56c4ac _public_56c4ac
#define public_56c5b6 _public_56c5b6
#define public_56c5ca _public_56c5ca
#define public_56c61a _public_56c61a
#define public_56c66b _public_56c66b
#define public_56c675 _public_56c675
#define public_56c68a _public_56c68a
#define public_56c726 _public_56c726
#define public_56c829 _public_56c829
#define public_56c830 _public_56c830
#define public_56c83e _public_56c83e
#define public_56c8af _public_56c8af
#define public_56c8bd _public_56c8bd
#define public_56c900 _public_56c900
#define public_56c919 _public_56c919
#define public_56c93b _public_56c93b
#define public_56c969 _public_56c969
#define public_56c993 _public_56c993
#define public_56caa2 _public_56caa2
#define public_56caac _public_56caac
#define public_56cad7 _public_56cad7
#define public_56cade _public_56cade
#define public_56caec _public_56caec
#define public_56cb24 _public_56cb24

PROC_DECLARE(0x56c360, internal_56c360, public_56c360);
extern "C" NAKED register_t __cdecl internal_56c360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x208
        cmp eax, 0x3004
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        jne public_56c8bd
        xor ebx, ebx
        push ebx
        call public_5645c0
        mov eax, dword ptr ss : [esp+0x220]
        add esp, 4
        cmp eax, 0x300C
        jg public_56c829
        je public_56c726
        sub eax, 0x3002
        je public_56c4ac
        dec eax
        jne public_56c830
        cmp byte ptr ss : [ebp+0x110], bl
        jne public_56cb24
        mov ecx, dword ptr ss : [ebp+0xB8]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ss : [ebp+0xBC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xCC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xDC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xEC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xF0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xF4]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 3
        or dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ss : [ebp+0xF8]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xFC]
        or byte ptr ds : [ecx+0x6C], al
        mov eax, dword ptr ss : [ebp+0xD8]
        mov byte ptr ds : [eax+0x8A2], bl
        mov ecx, dword ptr ss : [ebp+0xDC]
        mov byte ptr ds : [ecx+0x8A2], bl
        mov edx, dword ptr ss : [ebp+0xC8]
        mov byte ptr ds : [edx+0x498], bl
        mov eax, dword ptr ss : [ebp+0xCC]
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ss : [ebp+0xD0]
        mov byte ptr ds : [ecx+0x498], bl
        jmp public_56caa2
        public_56c4ac : nop
        cmp byte ptr ss : [ebp+0x318], bl
        mov eax, dword ptr ss : [ebp+0xD4]
        je public_56c68a
        mov byte ptr ss : [ebp+0x318], bl
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ss : [ebp+0xD8]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ss : [ebp+0xDC]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ss : [ebp+0xD0]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ss : [ebp+0xC8]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ss : [ebp+0xCC]
        or byte ptr ds : [eax+0x6C], 1
        mov edx, dword ptr ss : [ebp+0xD0]
        mov byte ptr ds : [edx+0x498], 1
        mov eax, dword ptr ss : [ebp+0xC8]
        mov byte ptr ds : [eax+0x498], 1
        mov ecx, dword ptr ss : [ebp+0xCC]
        mov byte ptr ds : [ecx+0x498], 1
        mov ecx, dword ptr ss : [ebp+0xD8]
        mov eax, dword ptr ds : [ecx+0x8AC]
        cmp eax, 0xFFFFFFFF
        je public_56cb24
        push edi
        push eax
        call public_5a1f20
        mov edx, dword ptr ss : [ebp+0x360]
        mov esi, eax
        mov eax, dword ptr ss : [ebp+0x35C]
        mov ecx, 0x80
        lea edi, ss:[esp+0x18]
        rep movsd
        lea ecx, ss:[ebp+0x358]
        push edx
        push eax
        call public_4890c0
        mov ecx, dword ptr ss : [ebp+0xD8]
        mov dword ptr ds : [ecx+0x8A4], ebx
        mov edx, dword ptr ss : [ebp+0xDC]
        push ebx
        mov dword ptr ds : [edx+0x8A4], ebx
        mov ecx, dword ptr ss : [ebp+0xD4]
        push ebx
        call public_595d60
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_67e7b8
        call public_5aa8f0
        cmp eax, 1
        pop edi
        jne public_56c61a
        mov eax, dword ptr ss : [ebp+0xD8]
        mov edx, dword ptr ds : [eax+0x8A4]
        or ecx, 0xFFFFFFFF
        cmp edx, ecx
        jle public_56c5b6
        mov dword ptr ds : [eax+0x8AC], ecx
        public_56c5b6 : nop
        mov eax, dword ptr ss : [ebp+0xDC]
        cmp dword ptr ds : [eax+0x8A4], ecx
        jle public_56c5ca
        mov dword ptr ds : [eax+0x8AC], ecx
        public_56c5ca : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xD4]
        lea edx, ss:[esp+0x10]
        push edx
        call public_595d90
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [public_5c75dc]
        mov eax, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xD4]
        fstp dword ptr ss : [esp]
        push eax
        call public_595d60
        push ebx
        mov ecx, ebp
        call public_56bd40
        mov ecx, ebp
        call public_56cb40
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x208
        ret 0xC
        public_56c61a : nop
        cmp eax, 2
        je public_56c66b
        push ebx
        push ebx
        push 0x73B
        call public_473cb0
        add esp, 0xC
        mov ecx, offset public_67e7b8
        mov dword ptr ss : [ebp+0x108], ebx
        mov dword ptr ss : [ebp+0x10C], 0xC0000000
        call public_5aade0
        mov ecx, offset public_67e7b8
        call public_5aa680
        cmp eax, 1
        je public_56c675
        cmp eax, 2
        je public_56c66b
        push ebx
        push ebx
        push 0x73C
        call public_473cb0
        add esp, 0xC
        public_56c66b : nop
        mov dword ptr ss : [ebp+0xB4], 5
        public_56c675 : nop
        mov ecx, ebp
        call public_56cb40
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x208
        ret 0xC
        public_56c68a : nop
        mov byte ptr ss : [ebp+0x318], 1
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFE
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ss : [ebp+0xD8]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ss : [ebp+0xDC]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ss : [ebp+0xD0]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ss : [ebp+0xC8]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ss : [ebp+0xCC]
        and byte ptr ds : [eax+0x6C], cl
        mov ecx, dword ptr ss : [ebp+0xD0]
        mov byte ptr ds : [ecx+0x498], bl
        mov edx, dword ptr ss : [ebp+0xC8]
        mov byte ptr ds : [edx+0x498], bl
        mov eax, dword ptr ss : [ebp+0xCC]
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ss : [ebp+0xD8]
        mov eax, dword ptr ds : [ecx+0x8AC]
        cmp eax, 0xFFFFFFFF
        je public_56cb24
        push eax
        call public_5a1f20
        push eax
        call public_488b70
        push ebx
        push eax
        push ebp
        call public_488a80
        add esp, 0x10
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x208
        ret 0xC
        public_56c726 : nop
        cmp byte ptr ss : [ebp+0x110], bl
        jne public_56cb24
        mov ecx, dword ptr ss : [ebp+0xB8]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ss : [ebp+0xBC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xCC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xDC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xEC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xF0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xF4]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 3
        or dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ss : [ebp+0xF8]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xFC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD8]
        mov byte ptr ds : [ecx+0x8A2], bl
        mov edx, dword ptr ss : [ebp+0xDC]
        mov byte ptr ds : [edx+0x8A2], bl
        mov eax, dword ptr ss : [ebp+0xC8]
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ss : [ebp+0xCC]
        mov byte ptr ds : [ecx+0x498], bl
        mov edx, dword ptr ss : [ebp+0xD0]
        mov byte ptr ds : [edx+0x498], bl
        mov dword ptr ss : [ebp+0x114], ebx
        jmp public_56caac
        public_56c829 : nop
        cmp eax, 0xF003
        je public_56c83e
        public_56c830 : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x208
        ret 0xC
        public_56c83e : nop
        cmp byte ptr ss : [ebp+0x318], bl
        je public_56c8af
        mov eax, dword ptr ss : [ebp+0xD4]
        mov byte ptr ss : [ebp+0x318], bl
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ss : [ebp+0xD8]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ss : [ebp+0xDC]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ss : [ebp+0xD0]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ss : [ebp+0xC8]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ss : [ebp+0xCC]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ss : [ebp+0xD0]
        mov byte ptr ds : [eax+0x498], 1
        mov ecx, dword ptr ss : [ebp+0xC8]
        mov byte ptr ds : [ecx+0x498], 1
        mov edx, dword ptr ss : [ebp+0xCC]
        mov byte ptr ds : [edx+0x498], 1
        public_56c8af : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x208
        ret 0xC
        public_56c8bd : nop
        cmp eax, 0xF002
        jg public_56cad7
        je public_56c993
        cmp eax, 0x3006
        je public_56c93b
        cmp eax, 0xF001
        jne public_56cade
        mov eax, dword ptr ss : [esp+0x220]
        cmp eax, 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp+0xD8]
        jl public_56c900
        cmp eax, dword ptr ds : [ecx+0x8A4]
        jge public_56c900
        mov dword ptr ds : [ecx+0x8AC], eax
        public_56c900 : nop
        cmp eax, 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp+0xDC]
        jl public_56c919
        cmp eax, dword ptr ds : [ecx+0x8A4]
        jge public_56c919
        mov dword ptr ds : [ecx+0x8AC], eax
        public_56c919 : nop
        mov ecx, dword ptr ss : [ebp+0xD8]
        push eax
        call public_5a1f20
        push eax
        mov ecx, ebp
        call public_56bd40
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x208
        ret 0xC
        public_56c93b : nop
        mov eax, dword ptr ss : [esp+0x21C]
        xor ebx, ebx
        cmp eax, ebx
        jne public_56c969
        mov eax, dword ptr ss : [ebp]
        push ebx
        push 0xF003
        push 0x3004
        mov ecx, ebp
        call dword ptr ds : [eax+0x5C]
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x208
        ret 0xC
        public_56c969 : nop
        cmp eax, 1
        jne public_56cb24
        mov edx, dword ptr ss : [ebp]
        push ebx
        push 0x3002
        push 0x3004
        mov ecx, ebp
        call dword ptr ds : [edx+0x5C]
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x208
        ret 0xC
        public_56c993 : nop
        mov eax, dword ptr ss : [ebp+0xD8]
        cmp dword ptr ds : [eax+0x8AC], 0xFFFFFFFF
        je public_56cb24
        mov al, byte ptr ss : [ebp+0x110]
        xor ebx, ebx
        cmp al, bl
        jne public_56cb24
        mov ecx, dword ptr ss : [ebp+0xB8]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ss : [ebp+0xBC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xCC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xDC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xEC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xF0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xF4]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 3
        or dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ss : [ebp+0xF8]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xFC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD8]
        mov byte ptr ds : [ecx+0x8A2], bl
        mov edx, dword ptr ss : [ebp+0xDC]
        mov byte ptr ds : [edx+0x8A2], bl
        mov eax, dword ptr ss : [ebp+0xC8]
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ss : [ebp+0xCC]
        mov byte ptr ds : [ecx+0x498], bl
        mov edx, dword ptr ss : [ebp+0xD0]
        mov byte ptr ds : [edx+0x498], bl
        public_56caa2 : nop
        mov dword ptr ss : [ebp+0x114], 1
        public_56caac : nop
        push 0x1B
        mov byte ptr ss : [ebp+0x110], 1
        mov dword ptr ss : [ebp+0x108], ebx
        mov dword ptr ss : [ebp+0x10C], ebx
        call public_564570
        add esp, 4
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x208
        ret 0xC
        public_56cad7 : nop
        cmp eax, 0xF005
        je public_56caec
        public_56cade : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x208
        ret 0xC
        public_56caec : nop
        mov ecx, dword ptr ss : [ebp+0xD4]
        mov esi, dword ptr ss : [ebp+0xD8]
        call public_595dd0
        call public_5b7ec0
        mov dword ptr ds : [esi+0x88C], eax
        mov ecx, dword ptr ss : [ebp+0xD4]
        mov ebp, dword ptr ss : [ebp+0xDC]
        call public_595dd0
        call public_5b7ec0
        mov dword ptr ss : [ebp+0x88C], eax
        public_56cb24 : nop
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x208
        ret 0xC
        UNREACHABLE_TRAP(0x56c360)
    }
}

#undef public_56c4ac
#undef public_56c5b6
#undef public_56c5ca
#undef public_56c61a
#undef public_56c66b
#undef public_56c675
#undef public_56c68a
#undef public_56c726
#undef public_56c829
#undef public_56c830
#undef public_56c83e
#undef public_56c8af
#undef public_56c8bd
#undef public_56c900
#undef public_56c919
#undef public_56c93b
#undef public_56c969
#undef public_56c993
#undef public_56caa2
#undef public_56caac
#undef public_56cad7
#undef public_56cade
#undef public_56caec
#undef public_56cb24
