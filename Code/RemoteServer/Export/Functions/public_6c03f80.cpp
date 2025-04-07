#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c03fc9 _public_6c03fc9
#define public_6c03fed _public_6c03fed
#define public_6c04000 _public_6c04000
#define public_6c04023 _public_6c04023
#define public_6c04036 _public_6c04036
#define public_6c04079 _public_6c04079
#define public_6c040aa _public_6c040aa

PROC_DECLARE(0x6c03f80, internal_6c03f80, public_6c03f80);
extern "C" NAKED register_t __cdecl internal_6c03f80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6bebe50
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6c03fc9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c03fc9 : nop
        xor eax, eax
        or ecx, 0xFFFFFFFF
        lea edx, ss:[ebp+0x20]
        mov edi, edx
        repne scasb
        mov eax, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        not ecx
        add eax, 2
        dec ecx
        cmp eax, edi
        mov dword ptr ds : [ebx], eax
        jbe public_6c03fed
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6c03fed : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c04000
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c04000 : nop
        mov eax, dword ptr ds : [esi]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ds : [ebx+4]
        xor eax, eax
        mov ax, cx
        mov ecx, dword ptr ds : [ebx]
        add ecx, eax
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6c04023
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6c04023 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6c04036
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c04036 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, eax
        mov esi, edx
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [ebp+0x14]
        add ecx, eax
        push ebx
        lea eax, ss:[ebp+0x18]
        push edx
        mov dword ptr ds : [eax], ecx
        push eax
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6c04079
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c04079 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6c040aa
        mov dword ptr ds : [ecx+0x10], ebx
        public_6c040aa : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c03f80)
    }
}

#undef public_6c03fc9
#undef public_6c03fed
#undef public_6c04000
#undef public_6c04023
#undef public_6c04036
#undef public_6c04079
#undef public_6c040aa
