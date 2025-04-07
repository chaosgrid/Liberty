#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6302200);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6302269 _public_6302269
#define public_630227d _public_630227d
#define public_6302283 _public_6302283
#define public_6302291 _public_6302291
#define public_63022d2 _public_63022d2
#define public_63022eb _public_63022eb
#define public_63022fe _public_63022fe
#define public_6302309 _public_6302309
#define public_630230c _public_630230c
#define public_6302311 _public_6302311
#define public_630233a _public_630233a
#define public_6302353 _public_6302353
#define public_6302366 _public_6302366
#define public_6302370 _public_6302370
#define public_6302393 _public_6302393
#define public_63023ab _public_63023ab
#define public_63023be _public_63023be
#define public_63023cb _public_63023cb
#define public_63023cd _public_63023cd
#define public_63023d3 _public_63023d3
#define public_63023fc _public_63023fc
#define public_630240f _public_630240f
#define public_630241a _public_630241a
#define public_630241d _public_630241d
#define public_630241f _public_630241f
#define public_6302422 _public_6302422
#define public_630242e _public_630242e

PROC_DECLARE(0x6302200, internal_6302200, public_6302200);
extern "C" NAKED register_t __cdecl internal_6302200()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x50
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x4C], 0
        mov byte ptr ds : [ebx+0x4D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_62bb4b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6302269
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6302269
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6302269
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6302283
        mov dword ptr ds : [eax+8], ebx
        jmp public_6302283
        public_6302269 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_630227d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6302283
        public_630227d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6302283
        mov dword ptr ds : [eax], ebx
        public_6302283 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_630242e
        public_6302291 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x4C]
        test dl, dl
        jne public_630242e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6302370
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x4C], 0
        jne public_63022d2
        mov byte ptr ds : [ecx+0x4C], 1
        mov byte ptr ds : [edx+0x4C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6302422
        public_63022d2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6302311
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_63022eb
        mov dword ptr ds : [edx+4], eax
        public_63022eb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_63022fe
        mov dword ptr ds : [edx+4], ecx
        jmp public_630230c
        public_63022fe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6302309
        mov dword ptr ds : [edx], ecx
        jmp public_630230c
        public_6302309 : nop
        mov dword ptr ds : [edx+8], ecx
        public_630230c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6302311 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x4C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_630233a
        mov dword ptr ds : [edi+4], ecx
        public_630233a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6302353
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_630241f
        public_6302353 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6302366
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_630241f
        public_6302366 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_630241f
        public_6302370 : nop
        cmp byte ptr ds : [edx+0x4C], 0
        jne public_6302393
        mov byte ptr ds : [ecx+0x4C], 1
        mov byte ptr ds : [edx+0x4C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x4C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6302422
        public_6302393 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_63023d3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_63023ab
        mov dword ptr ds : [edx+4], eax
        public_63023ab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_63023be
        mov dword ptr ds : [edx+4], ecx
        jmp public_63023cd
        public_63023be : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_63023cb
        mov dword ptr ds : [edx+8], ecx
        jmp public_63023cd
        public_63023cb : nop
        mov dword ptr ds : [edx], ecx
        public_63023cd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_63023d3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x4C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_63023fc
        mov dword ptr ds : [edi+4], ecx
        public_63023fc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_630240f
        mov dword ptr ds : [edi+4], edx
        jmp public_630241d
        public_630240f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_630241a
        mov dword ptr ds : [edi], edx
        jmp public_630241d
        public_630241a : nop
        mov dword ptr ds : [edi+8], edx
        public_630241d : nop
        mov dword ptr ds : [edx], ecx
        public_630241f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6302422 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6302291
        public_630242e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x4C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6302200)
    }
}

#undef public_6302269
#undef public_630227d
#undef public_6302283
#undef public_6302291
#undef public_63022d2
#undef public_63022eb
#undef public_63022fe
#undef public_6302309
#undef public_630230c
#undef public_6302311
#undef public_630233a
#undef public_6302353
#undef public_6302366
#undef public_6302370
#undef public_6302393
#undef public_63023ab
#undef public_63023be
#undef public_63023cb
#undef public_63023cd
#undef public_63023d3
#undef public_63023fc
#undef public_630240f
#undef public_630241a
#undef public_630241d
#undef public_630241f
#undef public_6302422
#undef public_630242e
