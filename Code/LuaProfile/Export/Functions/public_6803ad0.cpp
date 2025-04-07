#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803ad0);
CLANG_FORWARD_PROC_SYMBOL(public_68061c0);

#define public_6803ae5 _public_6803ae5
#define public_6803af9 _public_6803af9
#define public_6803b11 _public_6803b11
#define public_6803b24 _public_6803b24
#define public_6803b2b _public_6803b2b
#define public_6803b3c _public_6803b3c
#define public_6803b41 _public_6803b41
#define public_6803b5a _public_6803b5a
#define public_6803b6e _public_6803b6e
#define public_6803b8c _public_6803b8c
#define public_6803b9f _public_6803b9f
#define public_6803bac _public_6803bac
#define public_6803bcd _public_6803bcd

PROC_DECLARE(0x6803ad0, internal_6803ad0, public_6803ad0);
extern "C" NAKED register_t __cdecl internal_6803ad0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp dword ptr ds : [ebx], 0xFFFFFFFE
        push esi
        push edi
        je public_6803ae5
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 
        public_6803ae5 : nop
        mov esi, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [public_680c05c]
        add esi, 0x28
        mov dword ptr ss : [esp+0x10], 1
        public_6803af9 : nop
        mov eax, dword ptr ds : [public_680c058]
        cmp dword ptr ds : [eax], 1
        jle public_6803b11
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push 8
        push ecx
        call edi
        add esp, 8
        jmp public_6803b24
        public_6803b11 : nop
        mov eax, dword ptr ds : [public_680c054]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 8
        public_6803b24 : nop
        test eax, eax
        je public_6803b2b
        inc esi
        jmp public_6803af9
        public_6803b2b : nop
        mov al, byte ptr ds : [esi]
        cmp al, 0x2D
        jne public_6803b3c
        inc esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        jmp public_6803b41
        public_6803b3c : nop
        cmp al, 0x2B
        jne public_6803b41
        inc esi
        public_6803b41 : nop
        mov edx, dword ptr ds : [public_680c058]
        cmp dword ptr ds : [edx], 1
        jle public_6803b5a
        xor eax, eax
        mov al, byte ptr ds : [esi]
        push 4
        push eax
        call edi
        add esp, 8
        jmp public_6803b6e
        public_6803b5a : nop
        mov edx, dword ptr ds : [public_680c054]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        xor eax, eax
        mov eax, dword ptr ds : [edx]
        mov al, byte ptr ds : [eax+ecx*2]
        and eax, 4
        public_6803b6e : nop
        test eax, eax
        jne public_6803bac
        mov ecx, dword ptr ds : [public_680c058]
        cmp dword ptr ds : [ecx], 1
        jle public_6803b8c
        xor edx, edx
        mov dl, byte ptr ds : [esi+1]
        push 4
        push edx
        call edi
        add esp, 8
        jmp public_6803b9f
        public_6803b8c : nop
        mov ecx, dword ptr ds : [public_680c054]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [esi+1]
        mov al, byte ptr ds : [edx+eax*2]
        and eax, 4
        public_6803b9f : nop
        test eax, eax
        jne public_6803bac
        pop edi
        pop esi
        mov eax, 2
        pop ebx
        ret 
        public_6803bac : nop
        push esi
        call public_68061c0
        fcom qword ptr ds : [public_680c180]
        add esp, 4
        fnstsw ax
        test ah, 1
        je public_6803bcd
        pop edi
        fstp st(0)
        pop esi
        mov eax, 2
        pop ebx
        ret 
        public_6803bcd : nop
        fild dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ebx], 0xFFFFFFFF
        fmul st, st(1)
        xor eax, eax
        fstp qword ptr ds : [ebx+8]
        pop ebx
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6803ad0)
    }
}

#undef public_6803ae5
#undef public_6803af9
#undef public_6803b11
#undef public_6803b24
#undef public_6803b2b
#undef public_6803b3c
#undef public_6803b41
#undef public_6803b5a
#undef public_6803b6e
#undef public_6803b8c
#undef public_6803b9f
#undef public_6803bac
#undef public_6803bcd
