#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2c310);

#define public_6f2c31f _public_6f2c31f
#define public_6f2c371 _public_6f2c371
#define public_6f2c380 _public_6f2c380
#define public_6f2c389 _public_6f2c389
#define public_6f2c395 _public_6f2c395
#define public_6f2c3ac _public_6f2c3ac
#define public_6f2c3b3 _public_6f2c3b3
#define public_6f2c3b8 _public_6f2c3b8
#define public_6f2c3c7 _public_6f2c3c7

PROC_DECLARE(0x6f2c310, internal_6f2c310, public_6f2c310);
extern "C" NAKED register_t __cdecl internal_6f2c310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x28
        test eax, eax
        jne public_6f2c31f
        add esp, 0x28
        ret 
        public_6f2c31f : nop
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        test edi, edi
        mov ebp, eax
        mov byte ptr ss : [esp+0xC], 0x5C
        mov dword ptr ss : [esp+0x10], offset public_6f5f670
        mov byte ptr ss : [esp+0x14], 0xD
        mov dword ptr ss : [esp+0x18], offset public_6f5f66c
        mov byte ptr ss : [esp+0x1C], 0xA
        mov dword ptr ss : [esp+0x20], offset public_6f5f668
        mov byte ptr ss : [esp+0x24], 8
        mov dword ptr ss : [esp+0x28], offset public_6f5f664
        mov byte ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        je public_6f2c3b8
        public_6f2c371 : nop
        mov al, byte ptr ss : [ebp]
        test al, al
        je public_6f2c3c7
        lea ecx, ss:[esp+0xC]
        mov dl, 0x5C
        mov edi, edi
        public_6f2c380 : nop
        cmp al, dl
        jne public_6f2c389
        cmp edi, 2
        jg public_6f2c395
        public_6f2c389 : nop
        mov dl, byte ptr ds : [ecx+8]
        add ecx, 8
        test dl, dl
        jne public_6f2c380
        jmp public_6f2c3ac
        public_6f2c395 : nop
        mov edx, dword ptr ds : [ecx+4]
        mov al, byte ptr ds : [edx]
        mov byte ptr ds : [esi], al
        mov dl, byte ptr ds : [edx+1]
        mov al, byte ptr ds : [ecx]
        inc esi
        mov byte ptr ds : [esi], dl
        inc esi
        sub edi, 2
        test al, al
        jne public_6f2c3b3
        public_6f2c3ac : nop
        mov al, byte ptr ss : [ebp]
        mov byte ptr ds : [esi], al
        inc esi
        dec edi
        public_6f2c3b3 : nop
        inc ebp
        test edi, edi
        jne public_6f2c371
        public_6f2c3b8 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        pop edi
        mov byte ptr ds : [esi-1], 0
        pop esi
        pop ebp
        add esp, 0x28
        ret 
        public_6f2c3c7 : nop
        test edi, edi
        je public_6f2c3b8
        mov eax, dword ptr ss : [esp+0x3C]
        pop edi
        mov byte ptr ds : [esi], 0
        pop esi
        pop ebp
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6f2c310)
    }
}

#undef public_6f2c31f
#undef public_6f2c371
#undef public_6f2c380
#undef public_6f2c389
#undef public_6f2c395
#undef public_6f2c3ac
#undef public_6f2c3b3
#undef public_6f2c3b8
#undef public_6f2c3c7
