#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555b20);

#define public_555b32 _public_555b32
#define public_555b40 _public_555b40
#define public_555b60 _public_555b60
#define public_555b64 _public_555b64
#define public_555b69 _public_555b69
#define public_555b7f _public_555b7f
#define public_555b81 _public_555b81

PROC_DECLARE(0x555b20, internal_555b20, public_555b20);
extern "C" NAKED register_t __cdecl internal_555b20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [ecx]
        push ebp
        push esi
        push edi
        or eax, 0xFFFFFFFF
        xor edi, edi
        test ebx, ebx
        jle public_555b81
        mov ebp, dword ptr ds : [ecx+4]
        public_555b32 : nop
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_555b40 : nop
        mov al, byte ptr ds : [ecx]
        mov dl, al
        cmp al, byte ptr ds : [esi]
        jne public_555b64
        test dl, dl
        je public_555b60
        mov al, byte ptr ds : [ecx+1]
        mov dl, al
        cmp al, byte ptr ds : [esi+1]
        jne public_555b64
        add ecx, 2
        add esi, 2
        test dl, dl
        jne public_555b40
        public_555b60 : nop
        xor ecx, ecx
        jmp public_555b69
        public_555b64 : nop
        sbb ecx, ecx
        sbb ecx, 0xFFFFFFFF
        public_555b69 : nop
        test ecx, ecx
        je public_555b7f
        inc edi
        add ebp, 4
        cmp edi, ebx
        jl public_555b32
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        public_555b7f : nop
        mov eax, edi
        public_555b81 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x555b20)
    }
}

#undef public_555b32
#undef public_555b40
#undef public_555b60
#undef public_555b64
#undef public_555b69
#undef public_555b7f
#undef public_555b81
