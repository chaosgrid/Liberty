#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b40300);
CLANG_FORWARD_PROC_SYMBOL(public_6b40380);
CLANG_FORWARD_PROC_SYMBOL(public_6b42c30);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a84e);

#define public_6b403bf _public_6b403bf
#define public_6b403c3 _public_6b403c3
#define public_6b403f1 _public_6b403f1
#define public_6b4040b _public_6b4040b
#define public_6b40493 _public_6b40493
#define public_6b404a2 _public_6b404a2
#define public_6b404b3 _public_6b404b3
#define public_6b404c8 _public_6b404c8

PROC_DECLARE(0x6b40380, internal_6b40380, public_6b40380);
extern "C" NAKED register_t __cdecl internal_6b40380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a84e @0x6b40382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a84e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx], offset public_6b6c218
        xor ebx, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov edx, dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], eax
        je public_6b404a2
        jmp public_6b403c3
        public_6b403bf : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6b403c3 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        je public_6b40493
        mov dword ptr ss : [esp+0x18], edi
        mov esi, dword ptr ds : [edi+0x274]
        cmp esi, ebx
        mov byte ptr ss : [esp+0x2C], 5
        je public_6b403f1
        mov ecx, esi
        call public_6b40300
        push esi
        call public_6b6a092
        add esp, 4
        public_6b403f1 : nop
        mov esi, dword ptr ds : [edi+0x278]
        cmp esi, ebx
        je public_6b4040b
        mov ecx, esi
        call public_6b40300
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4040b : nop
        mov ebp, dword ptr ds : [edi+0x26C]
        lea esi, ds:[edi+0x268]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 4
        call dword ptr ds : [public_6b6b010]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6b6b0a8]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6b6a092
        add esp, 4
        lea ecx, ds:[edi+0x264]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ss : [esp+0x2C], 3
        call public_6b3a450
        push 1
        lea ecx, ds:[edi+0x214]
        mov byte ptr ss : [esp+0x30], 2
        call dword ptr ds : [public_6b6b178]
        push 1
        lea ecx, ds:[edi+0x204]
        mov byte ptr ss : [esp+0x30], 1
        call dword ptr ds : [public_6b6b178]
        push edi
        call public_6b6a092
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        public_6b40493 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0x28]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6b403bf
        public_6b404a2 : nop
        mov ebp, dword ptr ds : [ecx+0x28]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ecx+0x24]
        mov byte ptr ss : [esp+0x2C], bl
        je public_6b404c8
        public_6b404b3 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_6b42c30
        cmp esi, ebp
        jne public_6b404b3
        public_6b404c8 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6b6a092
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_6b4e730
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6b40380)
    }
}

#undef public_6b403bf
#undef public_6b403c3
#undef public_6b403f1
#undef public_6b4040b
#undef public_6b40493
#undef public_6b404a2
#undef public_6b404b3
#undef public_6b404c8
