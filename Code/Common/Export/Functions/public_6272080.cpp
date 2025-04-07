#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272080);

#define public_62720a5 _public_62720a5
#define public_62720f6 _public_62720f6
#define public_62720f8 _public_62720f8
#define public_62720fc _public_62720fc
#define public_6272131 _public_6272131
#define public_6272146 _public_6272146

PROC_DECLARE(0x6272080, internal_6272080, public_6272080);
extern "C" NAKED register_t __cdecl internal_6272080()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, ecx
        mov dword ptr ss : [esp+8], ecx
        je public_6272146
        push ebx
        mov ebx, dword ptr ss : [ebp+4]
        push esi
        mov esi, dword ptr ds : [ebx]
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        je public_62720fc
        public_62720a5 : nop
        cmp esi, ebx
        je public_6272131
        mov dx, word ptr ds : [esi+8]
        cmp dx, word ptr ds : [eax+8]
        jbe public_62720f6
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+4], esi
        mov ebp, dword ptr ss : [esp+0x1C]
        mov esi, edx
        jmp public_62720f8
        public_62720f6 : nop
        mov eax, dword ptr ds : [eax]
        public_62720f8 : nop
        cmp eax, edi
        jne public_62720a5
        public_62720fc : nop
        cmp esi, ebx
        je public_6272131
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [edx], edi
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+4], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [edx+4], eax
        public_6272131 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [ebp+8], 0
        pop ebx
        public_6272146 : nop
        pop ebp
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6272080)
    }
}

#undef public_62720a5
#undef public_62720f6
#undef public_62720f8
#undef public_62720fc
#undef public_6272131
#undef public_6272146
