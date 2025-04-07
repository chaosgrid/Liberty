#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dfd53);

#define public_65dfbbc _public_65dfbbc
#define public_65dfbd4 _public_65dfbd4
#define public_65dfbde _public_65dfbde
#define public_65dfbe5 _public_65dfbe5
#define public_65dfbef _public_65dfbef
#define public_65dfc01 _public_65dfc01
#define public_65dfc15 _public_65dfc15
#define public_65dfc2e _public_65dfc2e
#define public_65dfc34 _public_65dfc34
#define public_65dfc5f _public_65dfc5f
#define public_65dfc65 _public_65dfc65
#define public_65dfc6e _public_65dfc6e
#define public_65dfc7c _public_65dfc7c
#define public_65dfc8a _public_65dfc8a

PROC_DECLARE(0x65dfb90, internal_65dfb90, public_65dfb90);
extern "C" NAKED register_t __cdecl internal_65dfb90()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push edi
        push esi
        push ebx
        mov ecx, dword ptr ss : [ebp+0x10]
        or ecx, ecx
        je public_65dfc8a
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0xC]
        lea eax, ds : [public_65e63e0]
        cmp dword ptr ds : [eax+8], 0
        jne public_65dfc01
        mov bh, 0x41
        mov bl, 0x5A
        mov dh, 0x20
        lea ecx, ds:[ecx]
        public_65dfbbc : nop
        mov ah, byte ptr ds : [esi]
        or ah, ah
        mov al, byte ptr ds : [edi]
        je public_65dfbe5
        or al, al
        je public_65dfbe5
        inc esi
        inc edi
        cmp ah, bh
        jb public_65dfbd4
        cmp ah, bl
        ja public_65dfbd4
        add ah, dh
        public_65dfbd4 : nop
        cmp al, bh
        jb public_65dfbde
        cmp al, bl
        ja public_65dfbde
        add al, dh
        public_65dfbde : nop
        cmp ah, al
        jne public_65dfbef
        dec ecx
        jne public_65dfbbc
        public_65dfbe5 : nop
        xor ecx, ecx
        cmp ah, al
        je public_65dfc8a
        public_65dfbef : nop
        mov ecx, 0xFFFFFFFF
        jb public_65dfc8a
        neg ecx
        jmp public_65dfc8a
        public_65dfc01 : nop
        lock inc dword ptr ds : [public_65e66c8]
        cmp dword ptr ds : [public_65e66c4], 0
        jg public_65dfc15
        push 0
        jmp public_65dfc2e
        public_65dfc15 : nop
        lock dec dword ptr ds : [public_65e66c8]
        mov ebx, ecx
        push 0x13
        call public_65dceab
        mov dword ptr ss : [esp], 1
        mov ecx, ebx
        public_65dfc2e : nop
        xor eax, eax
        xor ebx, ebx
        mov edi, edi
        public_65dfc34 : nop
        mov al, byte ptr ds : [esi]
        or eax, eax
        mov bl, byte ptr ds : [edi]
        je public_65dfc5f
        or ebx, ebx
        je public_65dfc5f
        inc esi
        inc edi
        push ecx
        push eax
        push ebx
        call public_65dfd53
        mov ebx, eax
        add esp, 4
        call public_65dfd53
        add esp, 4
        pop ecx
        cmp eax, ebx
        jne public_65dfc65
        dec ecx
        jne public_65dfc34
        public_65dfc5f : nop
        xor ecx, ecx
        cmp eax, ebx
        je public_65dfc6e
        public_65dfc65 : nop
        mov ecx, 0xFFFFFFFF
        jb public_65dfc6e
        neg ecx
        public_65dfc6e : nop
        pop eax
        or eax, eax
        jne public_65dfc7c
        lock dec dword ptr ds : [public_65e66c8]
        jmp public_65dfc8a
        public_65dfc7c : nop
        mov ebx, ecx
        push 0x13
        call public_65dcf0c
        add esp, 4
        mov ecx, ebx
        public_65dfc8a : nop
        mov eax, ecx
        pop ebx
        pop esi
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dfb90)
    }
}

#undef public_65dfbbc
#undef public_65dfbd4
#undef public_65dfbde
#undef public_65dfbe5
#undef public_65dfbef
#undef public_65dfc01
#undef public_65dfc15
#undef public_65dfc2e
#undef public_65dfc34
#undef public_65dfc5f
#undef public_65dfc65
#undef public_65dfc6e
#undef public_65dfc7c
#undef public_65dfc8a
