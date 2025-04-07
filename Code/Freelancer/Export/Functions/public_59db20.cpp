#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_59db42 _public_59db42
#define public_59db47 _public_59db47
#define public_59db67 _public_59db67
#define public_59db6b _public_59db6b
#define public_59db70 _public_59db70
#define public_59db87 _public_59db87
#define public_59dbb0 _public_59dbb0
#define public_59dbcb _public_59dbcb
#define public_59dbe4 _public_59dbe4
#define public_59dbe6 _public_59dbe6

PROC_DECLARE(0x59db20, internal_59db20, public_59db20);
extern "C" NAKED register_t __cdecl internal_59db20()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        push esi
        xor eax, eax
        cmp ebp, ebx
        push edi
        je public_59dbe6
        mov edi, dword ptr ds : [public_67dcec]
        cmp edi, ebx
        je public_59dbe6
        public_59db42 : nop
        mov esi, ebp
        lea edx, ds:[edi+0xC]
        public_59db47 : nop
        mov al, byte ptr ds : [edx]
        mov cl, al
        cmp al, byte ptr ds : [esi]
        jne public_59db6b
        cmp cl, bl
        je public_59db67
        mov al, byte ptr ds : [edx+1]
        mov cl, al
        cmp al, byte ptr ds : [esi+1]
        jne public_59db6b
        add edx, 2
        add esi, 2
        cmp cl, bl
        jne public_59db47
        public_59db67 : nop
        xor ecx, ecx
        jmp public_59db70
        public_59db6b : nop
        sbb ecx, ecx
        sbb ecx, 0xFFFFFFFF
        public_59db70 : nop
        cmp ecx, ebx
        sete cl
        cmp cl, bl
        jne public_59db87
        mov edi, dword ptr ds : [edi+4]
        cmp edi, ebx
        jne public_59db42
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_59db87 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx]
        mov edx, eax
        cmp edx, ebx
        je public_59dbe4
        mov esi, dword ptr ss : [esp+0x14]
        cmp esi, ebx
        jne public_59dbb0
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0x14], ebx
        mov byte ptr ds : [edx+0x18], bl
        pop ebx
        ret 
        public_59dbb0 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea ebp, ds:[edx+0x18]
        jb public_59dbcb
        mov eax, 0x1F
        public_59dbcb : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ds : [edx+0x14], eax
        public_59dbe4 : nop
        mov eax, edx
        public_59dbe6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x59db20)
    }
}

#undef public_59db42
#undef public_59db47
#undef public_59db67
#undef public_59db6b
#undef public_59db70
#undef public_59db87
#undef public_59dbb0
#undef public_59dbcb
#undef public_59dbe4
#undef public_59dbe6
