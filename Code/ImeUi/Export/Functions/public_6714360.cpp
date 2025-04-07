#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67142e0);
CLANG_FORWARD_PROC_SYMBOL(public_6714360);
CLANG_FORWARD_PROC_SYMBOL(public_6714450);

#define public_6714393 _public_6714393
#define public_6714397 _public_6714397
#define public_671439b _public_671439b
#define public_67143be _public_67143be
#define public_67143cb _public_67143cb
#define public_67143e5 _public_67143e5
#define public_67143fe _public_67143fe
#define public_671440b _public_671440b
#define public_6714410 _public_6714410
#define public_671443c _public_671443c
#define public_671443e _public_671443e
#define public_671444c _public_671444c

PROC_DECLARE(0x6714360, internal_6714360, public_6714360);
extern "C" NAKED register_t __cdecl internal_6714360()
{
    __asm
    {
        cmp dword ptr ds : [public_671b400], 3
        jne public_671444c
        push ebp
        push esi
        push edi
/*FIXUP push offset public_671b7c0 @0x6714370*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b7c0
        call dword ptr ds : [public_671937c]
        mov esi, eax
        call public_6714450
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        jne public_6714393
        mov al, byte ptr ds : [public_67190a5]
        test al, al
        je public_6714397
        public_6714393 : nop
        xor ebp, ebp
        jmp public_671439b
        public_6714397 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_671439b : nop
        cmp ebp, esi
        jge public_671443c
        mov edi, dword ptr ds : [public_671710c]
        mov eax, esi
        mov esi, dword ptr ss : [esp+0x10]
        sub eax, ebp
        test eax, eax
        jle public_671440b
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_671cf8c]
        public_67143be : nop
        test eax, eax
        je public_67143cb
        push 8
        call eax
        add esp, 4
        jmp public_67143e5
        public_67143cb : nop
        push 0
        push 8
        push 0x100
        push esi
        mov byte ptr ds : [public_671cfb9], 1
        call edi
        mov byte ptr ds : [public_671cfb9], 0
        public_67143e5 : nop
        mov eax, dword ptr ds : [public_671cf8c]
        test eax, eax
        jne public_67143fe
        push eax
        push 8
        push 0x102
        push esi
        call edi
        mov eax, dword ptr ds : [public_671cf8c]
        public_67143fe : nop
        mov ecx, dword ptr ss : [esp+0x14]
        dec ecx
        mov dword ptr ss : [esp+0x14], ecx
        jne public_67143be
        jmp public_6714410
        public_671440b : nop
        mov eax, dword ptr ds : [public_671cf8c]
        public_6714410 : nop
        test eax, eax
        jne public_671443e
        push eax
        push 8
        push 0x101
        push esi
        mov byte ptr ds : [public_671cfb9], 1
        call edi
        push ebp
        push 0x25
        mov byte ptr ds : [public_671cfb9], 0
        call public_67142e0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        ret 
        public_671443c : nop
        mov ebp, esi
        public_671443e : nop
        push ebp
        push 0x25
        call public_67142e0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        public_671444c : nop
        ret 
        UNREACHABLE_TRAP(0x6714360)
    }
}

#undef public_6714393
#undef public_6714397
#undef public_671439b
#undef public_67143be
#undef public_67143cb
#undef public_67143e5
#undef public_67143fe
#undef public_671440b
#undef public_6714410
#undef public_671443c
#undef public_671443e
#undef public_671444c
