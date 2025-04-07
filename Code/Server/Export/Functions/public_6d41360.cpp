#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41360);
CLANG_FORWARD_PROC_SYMBOL(public_6d42b60);

#define public_6d41380 _public_6d41380
#define public_6d413bc _public_6d413bc
#define public_6d413d3 _public_6d413d3
#define public_6d413df _public_6d413df
#define public_6d413e5 _public_6d413e5
#define public_6d413e8 _public_6d413e8
#define public_6d413f7 _public_6d413f7
#define public_6d41420 _public_6d41420
#define public_6d41429 _public_6d41429
#define public_6d41432 _public_6d41432
#define public_6d4144f _public_6d4144f

PROC_DECLARE(0x6d41360, internal_6d41360, public_6d41360);
extern "C" NAKED register_t __cdecl internal_6d41360()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [esi+0x30]
        push 0
        push eax
        push ecx
        call public_6d42b60
        add esp, 0xC
        push ebx
        mov edi, 1
        push ebp
        lea ecx, ds:[ecx]
        public_6d41380 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d413e8
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_6d413e8
        mov eax, ecx
        lea edx, ds:[edi*4]
        movzx ebp, word ptr ds : [eax+edx]
        lea ecx, ds:[eax+edx]
        movzx ebx, word ptr ds : [ecx-2]
        lea eax, ds:[ecx-2]
        inc ebx
        cmp ebp, ebx
        jg public_6d413e5
        mov bx, word ptr ds : [eax]
        add ecx, 2
        cmp bx, word ptr ds : [ecx]
        jb public_6d413bc
        mov ecx, eax
        public_6d413bc : nop
        mov cx, word ptr ds : [ecx]
        mov word ptr ds : [eax], cx
        mov ecx, dword ptr ds : [esi+0x30]
        add ecx, edx
        mov edx, dword ptr ds : [esi+0x34]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        je public_6d413df
        sub ecx, eax
        public_6d413d3 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], ebx
        add eax, 4
        cmp eax, edx
        jne public_6d413d3
        public_6d413df : nop
        add dword ptr ds : [esi+0x34], 0xFFFFFFFC
        jmp public_6d41380
        public_6d413e5 : nop
        inc edi
        jmp public_6d41380
        public_6d413e8 : nop
        cmp word ptr ds : [esi+0x28], 0
        je public_6d41432
        mov edi, dword ptr ds : [public_6d64ba4]
        xor ebx, ebx
        public_6d413f7 : nop
        movzx edx, word ptr ds : [esi+0x28]
        push edx
        push ebx
        call edi
        add esp, 8
        test eax, eax
        je public_6d41429
        xor ecx, ecx
        mov cl, bl
        mov eax, ecx
        shr eax, 5
        and ecx, 0x8000001F
        lea eax, ds:[esi+eax*4+8]
        jns public_6d41420
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d41420 : nop
        mov edx, 1
        shl edx, cl
        or dword ptr ds : [eax], edx
        public_6d41429 : nop
        inc ebx
        cmp ebx, 0xFF
        jbe public_6d413f7
        public_6d41432 : nop
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        pop ebp
        pop ebx
        jne public_6d4144f
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        jne public_6d4144f
        mov eax, 1
        pop edi
        mov byte ptr ds : [esi+5], al
        pop esi
        ret 4
        public_6d4144f : nop
        xor eax, eax
        pop edi
        mov byte ptr ds : [esi+5], al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d41360)
    }
}

#undef public_6d41380
#undef public_6d413bc
#undef public_6d413d3
#undef public_6d413df
#undef public_6d413e5
#undef public_6d413e8
#undef public_6d413f7
#undef public_6d41420
#undef public_6d41429
#undef public_6d41432
#undef public_6d4144f
