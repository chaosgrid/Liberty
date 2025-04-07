#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fbd0);

#define public_6f4f9db _public_6f4f9db
#define public_6f4f9f3 _public_6f4f9f3
#define public_6f4fa06 _public_6f4fa06
#define public_6f4fa2b _public_6f4fa2b
#define public_6f4fa31 _public_6f4fa31
#define public_6f4fa49 _public_6f4fa49
#define public_6f4fa5c _public_6f4fa5c
#define public_6f4fa82 _public_6f4fa82
#define public_6f4fa86 _public_6f4fa86
#define public_6f4faba _public_6f4faba
#define public_6f4fabf _public_6f4fabf
#define public_6f4fad8 _public_6f4fad8
#define public_6f4faea _public_6f4faea
#define public_6f4fafb _public_6f4fafb
#define public_6f4fb21 _public_6f4fb21
#define public_6f4fb35 _public_6f4fb35
#define public_6f4fb4c _public_6f4fb4c
#define public_6f4fb65 _public_6f4fb65
#define public_6f4fb77 _public_6f4fb77
#define public_6f4fb7e _public_6f4fb7e
#define public_6f4fb90 _public_6f4fb90
#define public_6f4fba8 _public_6f4fba8
#define public_6f4fbc0 _public_6f4fbc0

PROC_DECLARE(0x6f4f9b0, internal_6f4f9b0, public_6f4f9b0);
extern "C" NAKED register_t __cdecl internal_6f4f9b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ds : [public_6f5a0c4]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        xor edi, edi
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x10], edi
        public_6f4f9db : nop
        mov eax, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [eax], 1
        jle public_6f4f9f3
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push 4
        push ecx
        call ebx
        add esp, 8
        jmp public_6f4fa06
        public_6f4f9f3 : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 4
        public_6f4fa06 : nop
        test eax, eax
        je public_6f4fa2b
        movsx edx, byte ptr ds : [esi]
        sub edx, 0x30
        mov dword ptr ss : [esp+0x14], edx
        inc esi
        fild dword ptr ss : [esp+0x14]
        fld qword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6f5b440]
        faddp 
        fstp qword ptr ss : [esp+0x18]
        jmp public_6f4f9db
        public_6f4fa2b : nop
        cmp byte ptr ds : [esi], 0x2E
        jne public_6f4fa86
        inc esi
        public_6f4fa31 : nop
        mov eax, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [eax], 1
        jle public_6f4fa49
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push 4
        push ecx
        call ebx
        add esp, 8
        jmp public_6f4fa5c
        public_6f4fa49 : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 4
        public_6f4fa5c : nop
        test eax, eax
        je public_6f4fa82
        movsx edx, byte ptr ds : [esi]
        sub edx, 0x30
        mov dword ptr ss : [esp+0x14], edx
        inc esi
        inc edi
        fild dword ptr ss : [esp+0x14]
        fld qword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6f5b440]
        faddp 
        fstp qword ptr ss : [esp+0x18]
        jmp public_6f4fa31
        public_6f4fa82 : nop
        mov dword ptr ss : [esp+0x10], edi
        public_6f4fa86 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6f5a0d4]
        add esp, 4
        cmp eax, 0x45
        jne public_6f4fb4c
        mov al, byte ptr ds : [esi+1]
        xor edi, edi
        inc esi
        cmp al, 0x2D
        mov dword ptr ss : [esp+0x14], 1
        jne public_6f4faba
        inc esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jmp public_6f4fabf
        public_6f4faba : nop
        cmp al, 0x2B
        jne public_6f4fabf
        inc esi
        public_6f4fabf : nop
        mov ecx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [ecx], 1
        jle public_6f4fad8
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        push 4
        push edx
        call ebx
        add esp, 8
        jmp public_6f4faea
        public_6f4fad8 : nop
        mov ecx, dword ptr ds : [public_6f5a0bc]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [esi]
        mov al, byte ptr ds : [edx+eax*2]
        and eax, 4
        public_6f4faea : nop
        test eax, eax
        jne public_6f4fafb
        fld qword ptr ds : [public_6f5b438]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6f4fafb : nop
        movsx ecx, byte ptr ds : [esi]
        mov edx, dword ptr ds : [public_6f5a0c0]
        lea eax, ds:[edi+edi*4]
        lea edi, ds:[ecx+eax*2-0x30]
        mov eax, dword ptr ds : [edx]
        inc esi
        cmp eax, 1
        jle public_6f4fb21
        xor eax, eax
        mov al, byte ptr ds : [esi]
        push 4
        push eax
        call ebx
        add esp, 8
        jmp public_6f4fb35
        public_6f4fb21 : nop
        mov edx, dword ptr ds : [public_6f5a0bc]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        xor eax, eax
        mov eax, dword ptr ds : [edx]
        mov al, byte ptr ds : [eax+ecx*2]
        and eax, 4
        public_6f4fb35 : nop
        test eax, eax
        jne public_6f4fafb
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        imul eax, edi
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov edi, ecx
        public_6f4fb4c : nop
        mov ecx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [ecx], 1
        jle public_6f4fb65
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        push 8
        push edx
        call ebx
        add esp, 8
        jmp public_6f4fb77
        public_6f4fb65 : nop
        mov ecx, dword ptr ds : [public_6f5a0bc]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [esi]
        mov al, byte ptr ds : [edx+eax*2]
        and eax, 8
        public_6f4fb77 : nop
        test eax, eax
        je public_6f4fb7e
        inc esi
        jmp public_6f4fb4c
        public_6f4fb7e : nop
        cmp byte ptr ds : [esi], 0
        je public_6f4fb90
        fld qword ptr ds : [public_6f5b438]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6f4fb90 : nop
        test edi, edi
        jle public_6f4fba8
        push edi
        call public_6f4fbd0
        fdivr qword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6f4fba8 : nop
        jge public_6f4fbc0
        neg edi
        push edi
        call public_6f4fbd0
        fmul qword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6f4fbc0 : nop
        fld qword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f4f9b0)
    }
}

#undef public_6f4f9db
#undef public_6f4f9f3
#undef public_6f4fa06
#undef public_6f4fa2b
#undef public_6f4fa31
#undef public_6f4fa49
#undef public_6f4fa5c
#undef public_6f4fa82
#undef public_6f4fa86
#undef public_6f4faba
#undef public_6f4fabf
#undef public_6f4fad8
#undef public_6f4faea
#undef public_6f4fafb
#undef public_6f4fb21
#undef public_6f4fb35
#undef public_6f4fb4c
#undef public_6f4fb65
#undef public_6f4fb77
#undef public_6f4fb7e
#undef public_6f4fb90
#undef public_6f4fba8
#undef public_6f4fbc0
