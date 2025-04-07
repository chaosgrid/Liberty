#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f21210);
CLANG_FORWARD_PROC_SYMBOL(public_6f931c0);

#define public_6f931e0 _public_6f931e0
#define public_6f931f3 _public_6f931f3
#define public_6f931f6 _public_6f931f6
#define public_6f931fa _public_6f931fa
#define public_6f93233 _public_6f93233
#define public_6f93240 _public_6f93240
#define public_6f93248 _public_6f93248
#define public_6f9326c _public_6f9326c

PROC_DECLARE(0x6f931c0, internal_6f931c0, public_6f931c0);
extern "C" NAKED register_t __cdecl internal_6f931c0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ecx
        push edi
        mov edi, edx
        mov al, 1
        je public_6f931fa
        lea esp, ss:[esp]
        public_6f931e0 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setl al
        test al, al
        je public_6f931f3
        mov esi, dword ptr ds : [esi]
        jmp public_6f931f6
        public_6f931f3 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f931f6 : nop
        cmp esi, ecx
        jne public_6f931e0
        public_6f931fa : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6f93248
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f93240
        cmp edi, dword ptr ds : [edx]
        jne public_6f93233
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6f21210
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6f93233 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f00610
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f93240 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jge public_6f9326c
        public_6f93248 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6f21210
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6f9326c : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f931c0)
    }
}

#undef public_6f931e0
#undef public_6f931f3
#undef public_6f931f6
#undef public_6f931fa
#undef public_6f93233
#undef public_6f93240
#undef public_6f93248
#undef public_6f9326c
