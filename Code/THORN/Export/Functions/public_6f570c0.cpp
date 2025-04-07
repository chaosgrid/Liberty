#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f56e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f570c0);

#define public_6f570e0 _public_6f570e0
#define public_6f570f0 _public_6f570f0
#define public_6f57110 _public_6f57110
#define public_6f57133 _public_6f57133
#define public_6f5713c _public_6f5713c
#define public_6f57142 _public_6f57142
#define public_6f57153 _public_6f57153

PROC_DECLARE(0x6f570c0, internal_6f570c0, public_6f570c0);
extern "C" NAKED register_t __cdecl internal_6f570c0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        cmp byte ptr ds : [esi+1], 0x5E
        push edi
        mov dword ptr ss : [esp+0x10], 1
        jne public_6f570e0
        mov dword ptr ss : [esp+0x10], 0
        inc esi
        public_6f570e0 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        inc esi
        cmp esi, ebx
        jae public_6f57142
        mov ebp, dword ptr ss : [esp+0x18]
        lea edi, ds:[esi+2]
        public_6f570f0 : nop
        mov al, byte ptr ds : [esi]
        cmp al, 0x25
        jne public_6f57110
        inc esi
        inc edi
        cmp esi, ebx
        jae public_6f5713c
        xor eax, eax
        mov al, byte ptr ds : [esi]
        push eax
        push ebp
        call public_6f56e10
        add esp, 8
        test eax, eax
        jne public_6f57153
        jmp public_6f5713c
        public_6f57110 : nop
        cmp byte ptr ds : [esi+1], 0x2D
        jne public_6f57133
        cmp edi, ebx
        jae public_6f57133
        add esi, 2
        xor ecx, ecx
        mov cl, byte ptr ds : [esi-2]
        add edi, 2
        cmp ecx, ebp
        jg public_6f5713c
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        cmp ebp, edx
        jle public_6f57153
        jmp public_6f5713c
        public_6f57133 : nop
        and eax, 0xFF
        cmp eax, ebp
        je public_6f57153
        public_6f5713c : nop
        inc esi
        inc edi
        cmp esi, ebx
        jb public_6f570f0
        public_6f57142 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        xor eax, eax
        test ecx, ecx
        pop ebp
        sete al
        pop ebx
        pop ecx
        ret 
        public_6f57153 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f570c0)
    }
}

#undef public_6f570e0
#undef public_6f570f0
#undef public_6f57110
#undef public_6f57133
#undef public_6f5713c
#undef public_6f57142
#undef public_6f57153
