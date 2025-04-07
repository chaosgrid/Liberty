#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6ae30);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b400);

#define public_6f6ae51 _public_6f6ae51
#define public_6f6ae60 _public_6f6ae60
#define public_6f6aea8 _public_6f6aea8
#define public_6f6aeb7 _public_6f6aeb7
#define public_6f6aed0 _public_6f6aed0
#define public_6f6af4a _public_6f6af4a
#define public_6f6af76 _public_6f6af76
#define public_6f6af83 _public_6f6af83
#define public_6f6af94 _public_6f6af94

PROC_DECLARE(0x6f6ae30, internal_6f6ae30, public_6f6ae30);
extern "C" NAKED register_t __cdecl internal_6f6ae30()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        mov ebx, dword ptr ss : [esp+0x48]
        push ebp
        mov ebp, dword ptr ss : [esp+0x50]
        push esi
        mov esi, ebp
        sub esi, ebx
        sar esi, 5
        cmp esi, 0x10
        push edi
        jle public_6f6af94
        jmp public_6f6ae60
        public_6f6ae51 : nop
        mov ebx, dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ss : [esp+0x58]
        lea esp, ss:[esp]
        public_6f6ae60 : nop
        mov edi, dword ptr ss : [esp+0x5C]
        push edi
        sub esp, 0x20
        lea eax, ss:[ebp-0x20]
        mov ecx, esp
        push eax
        call dword ptr ds : [public_6fb3240]
        mov eax, esi
        cdq 
        sub eax, edx
        sar eax, 1
        shl eax, 5
        sub esp, 0x20
        add eax, ebx
        mov ecx, esp
        push eax
        call dword ptr ds : [public_6fb3240]
        sub esp, 0x20
        mov ecx, esp
        push ebx
        call dword ptr ds : [public_6fb3240]
        lea ecx, ss:[esp+0x94]
        push ecx
        call public_6f6b400
        add esp, 0x68
        public_6f6aea8 : nop
        lea edx, ss:[esp+0x30]
        push edx
        push ebx
        call edi
        add esp, 8
        test al, al
        je public_6f6aed0
        public_6f6aeb7 : nop
        lea eax, ss:[esp+0x30]
        push eax
        add ebx, 0x20
        push ebx
        call edi
        add esp, 8
        test al, al
        jne public_6f6aeb7
        lea esp, ss:[esp]
        public_6f6aed0 : nop
        sub ebp, 0x20
        lea ecx, ss:[esp+0x30]
        push ebp
        push ecx
        call edi
        add esp, 8
        test al, al
        jne public_6f6aed0
        cmp ebp, ebx
        jbe public_6f6af4a
        mov ecx, dword ptr ds : [ebx+4]
        mov dl, byte ptr ds : [ebx]
        mov ax, word ptr ds : [ebx+2]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov byte ptr ss : [esp+0x10], dl
        mov edx, dword ptr ds : [ebx+8]
        mov word ptr ss : [esp+0x12], ax
        mov al, byte ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [ebx+0x14]
        mov byte ptr ss : [esp+0x1C], al
        mov al, byte ptr ds : [ebx+0x18]
        mov edi, ebx
        mov ecx, 8
        mov esi, ebp
        rep movsd
        mov ecx, 8
        lea esi, ss:[esp+0x10]
        mov edi, ebp
        mov dword ptr ss : [esp+0x24], edx
        mov byte ptr ss : [esp+0x28], al
        rep movsd
        mov edi, dword ptr ss : [esp+0x5C]
        add ebx, 0x20
        jmp public_6f6aea8
        public_6f6af4a : nop
        mov esi, dword ptr ss : [esp+0x58]
        mov ebp, dword ptr ss : [esp+0x54]
        mov edx, esi
        mov eax, ebx
        sub edx, ebx
        sub eax, ebp
        and edx, 0xFFFFFFE0
        and eax, 0xFFFFFFE0
        cmp edx, eax
        push 0
        push edi
        jg public_6f6af76
        push esi
        push ebx
        call public_6f6ae30
        mov dword ptr ss : [esp+0x68], ebx
        mov esi, ebx
        jmp public_6f6af83
        public_6f6af76 : nop
        push ebx
        push ebp
        call public_6f6ae30
        mov dword ptr ss : [esp+0x64], ebx
        mov ebp, ebx
        public_6f6af83 : nop
        sub esi, ebp
        sar esi, 5
        add esp, 0x10
        cmp esi, 0x10
        jg public_6f6ae51
        public_6f6af94 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6f6ae30)
    }
}

#undef public_6f6ae51
#undef public_6f6ae60
#undef public_6f6aea8
#undef public_6f6aeb7
#undef public_6f6aed0
#undef public_6f6af4a
#undef public_6f6af76
#undef public_6f6af83
#undef public_6f6af94
